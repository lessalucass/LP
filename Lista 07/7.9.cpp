/*7.9 Escreva um algoritmo que leia vários valores e imprima quantos valores informados são menores que o imediatamente
anterior. O algoritmo termina a ser informado um número negativo (que não deve ser considerado na contagem).*/

#include <stdio.h>

int main() {
    int valor, anterior, contador = 0;

    printf("Digite um valor (número negativo para encerrar): ");
    scanf("%d", &valor);

    while (valor >= 0) {
        if (valor < anterior) {
            contador++;
        }

        anterior = valor;

        printf("Digite um valor (número negativo para encerrar): ");
        scanf("%d", &valor);
    }

    printf("Quantidade de valores menores que o imediatamente anterior: %d\n", contador);

    return 0;
}

