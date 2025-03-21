/*11.19 Número perfeito é um número natural cuja soma de seus divisores próprios (excluído o próprio número) coincide
com o número. Por exemplo, o número 6 é um número perfeito, pois:
6 = 1 + 2 + 3
Escreva um algoritmo para ler vários números. Escrever uma mensagem indicando se cada número é ou não perfeito. O
algoritmo termina ao ser informado um valor nulo ou negativo.*/

#include <stdio.h>

int main() {
    int num;

    while (1) {
        printf("Digite um número (ou 0/negativo para encerrar): ");
        scanf("%d", &num);

        if (num <= 0) {
            break;
        }

        int somaDivisores = 0;

        for (int i = 1; i < num; i++) {
            if (num % i == 0) {
                somaDivisores += i;
            }
        }

        if (somaDivisores == num) {
            printf("%d é um número perfeito.\n", num);
        } else {
            printf("%d não é um número perfeito.\n", num);
        }
    }

    return 0;
}


