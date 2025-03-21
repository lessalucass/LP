/*9.10 Uma sequência de valores é obtida com as seguintes regras:
Sendo N um número da sequência, o próximo é calculado da seguinte forma:
• Se N é ímpar o próximo é obtido da seguinte forma: 3*N + 1.
• Se N é par o próximo é obtido da seguinte forma: N/2.
• A sequência termina quando N é igual a 1.
Escreva um algoritmo para ler uma quantidade indeterminada de inteiros. Para cada inteiro imprima a sequência gerada
conforme as regras acima (considere que o valor lido é o primeiro número da sequência). O programa termina ao ser
informado um inteiro igual a zero ou negativo*/

#include <stdio.h>

int main() {
    int numero;

    printf("Digite um inteiro positivo para gerar a sequência ou 0/negativo para sair: ");

    while (1) {
        scanf("%d", &numero);

        if (numero <= 0) {
            break; // Encerrar o loop quando um número zero ou negativo for inserido
        }

        printf("Sequência para %d: ", numero);

        while (numero != 1) {
            printf("%d ", numero);

            if (numero % 2 == 0) {
                numero /= 2; // Se o número for par, divida por 2
            } else {
                numero = 3 * numero + 1; // Se o número for ímpar, aplique a fórmula 3*N + 1
            }
        }

        printf("1\n"); // Adicionar o 1 final da sequência
    }

    return 0;
}

