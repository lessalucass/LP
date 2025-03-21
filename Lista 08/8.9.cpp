/*8.9 Escreva um algoritmo para ler várias duplas de inteiros onde o primeiro representa a quantidade de vezes que o
segundo será impresso. Para cada dupla escrever o segundo valor uma quantidade de vezes representada pelo primeiro.
Os valores impressos devem ser separados por um espaço em branco. O programa termina ao ser informado um valor
negativo ou zero para o primeiro número (nesta situação o segundo não deve ser lido).*/

#include <stdio.h>

int main() {
    int quantidade, valor;

    while (1) {
        printf("Digite a quantidade (ou um valor negativo/zero para encerrar): ");
        scanf("%d", &quantidade);

        if (quantidade <= 0) {
            break;
        }

        printf("Digite o valor a ser impresso: ");
        scanf("%d", &valor);

        for (int i = 0; i < quantidade; i++) {
            printf("%d", valor);
            if (i < quantidade - 1) {
                printf(" "); // Adicionar espaço em branco entre os valores
            }
        }
        printf("\n"); // Quebra de linha após imprimir a quantidade especificada.
    }

    return 0;
}


