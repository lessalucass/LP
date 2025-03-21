/*8.13 Escreva um algoritmo para ler um valor X (validar -com repeti��o- para aceitar apenas valores entre 1 (inclusive) e
10 (inclusive).*/

#include <stdio.h>

int main() {
    int x;

    do {
        printf("Digite um valor entre 1 e 10 (inclusive): ");
        scanf("%d", &x);

        if (x < 1 || x > 10) {
            printf("Valor fora do intervalo v�lido. Tente novamente.\n");
        }
    } while (x < 1 || x > 10);

    printf("Valor aceito: %d\n", x);
    printf("Multiplica��o de %d por n�meros de 1 a 10:\n", x);

    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", x, i, x * i);
    }

    return 0;
}



