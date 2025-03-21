/*8.7 Escreva um algoritmo para ler um valor N (validar para aceitar apenas valores positivos utilizando uma estrutura de
repetição) e imprimir a palavra PROGRAMACAO N vezes.*/

#include <stdio.h>

int main() {
    int N;

    do {
        printf("Digite um valor positivo para N: ");
        scanf("%d", &N);

        if (N <= 0) {
            printf("Valor inválido. Por favor, digite um valor positivo.\n");
        }
    } while (N <= 0);

    for (int i = 0; i < N; i++) {
        printf("PROGRAMACAO\n");
    }

    return 0;
}


