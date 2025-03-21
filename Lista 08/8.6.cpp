/*8.6 Escreva um algoritmo que leia um valor A e imprima os números de 1 a 20 com um incremento de A.*/

#include <stdio.h>

int main() {
    int A;

    printf("Digite um valor para A: ");
    scanf("%d", &A);

    int i = 1;
    while (i <= 20) {
        printf("%d\n", i);
        i += A;
    }

    return 0;
}


