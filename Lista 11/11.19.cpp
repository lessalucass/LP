/*11.19 N�mero perfeito � um n�mero natural cuja soma de seus divisores pr�prios (exclu�do o pr�prio n�mero) coincide
com o n�mero. Por exemplo, o n�mero 6 � um n�mero perfeito, pois:
6 = 1 + 2 + 3
Escreva um algoritmo para ler v�rios n�meros. Escrever uma mensagem indicando se cada n�mero � ou n�o perfeito. O
algoritmo termina ao ser informado um valor nulo ou negativo.*/

#include <stdio.h>

int main() {
    int num;

    while (1) {
        printf("Digite um n�mero (ou 0/negativo para encerrar): ");
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
            printf("%d � um n�mero perfeito.\n", num);
        } else {
            printf("%d n�o � um n�mero perfeito.\n", num);
        }
    }

    return 0;
}


