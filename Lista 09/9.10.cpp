/*9.10 Uma sequ�ncia de valores � obtida com as seguintes regras:
Sendo N um n�mero da sequ�ncia, o pr�ximo � calculado da seguinte forma:
� Se N � �mpar o pr�ximo � obtido da seguinte forma: 3*N + 1.
� Se N � par o pr�ximo � obtido da seguinte forma: N/2.
� A sequ�ncia termina quando N � igual a 1.
Escreva um algoritmo para ler uma quantidade indeterminada de inteiros. Para cada inteiro imprima a sequ�ncia gerada
conforme as regras acima (considere que o valor lido � o primeiro n�mero da sequ�ncia). O programa termina ao ser
informado um inteiro igual a zero ou negativo*/

#include <stdio.h>

int main() {
    int numero;

    printf("Digite um inteiro positivo para gerar a sequ�ncia ou 0/negativo para sair: ");

    while (1) {
        scanf("%d", &numero);

        if (numero <= 0) {
            break; // Encerrar o loop quando um n�mero zero ou negativo for inserido
        }

        printf("Sequ�ncia para %d: ", numero);

        while (numero != 1) {
            printf("%d ", numero);

            if (numero % 2 == 0) {
                numero /= 2; // Se o n�mero for par, divida por 2
            } else {
                numero = 3 * numero + 1; // Se o n�mero for �mpar, aplique a f�rmula 3*N + 1
            }
        }

        printf("1\n"); // Adicionar o 1 final da sequ�ncia
    }

    return 0;
}

