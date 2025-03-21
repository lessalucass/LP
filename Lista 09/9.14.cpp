/*9.14 A seguinte sequência de números 0 1 1 2 3 5 8 13 21... é conhecida como série de Fibonacci. Nessa sequência, cada
número, depois dos 2 primeiros, é igual à soma dos 2 anteriores. Escreva um algoritmo que calcule e escreva os 20
primeiros termos da série.*/

#include <stdio.h>

int main() {
    int termo1 = 0;
    int termo2 = 1;
    int termoAtual;

    printf("Os primeiros 20 termos da série de Fibonacci são:\n");

    // Imprimir os dois primeiros termos
    printf("%d %d ", termo1, termo2);

    // Calcular e imprimir os próximos 18 termos
    for (int i = 3; i <= 20; i++) {
        termoAtual = termo1 + termo2;
        printf("%d ", termoAtual);

        termo1 = termo2;
        termo2 = termoAtual;
    }

    printf("\n");

    return 0;
}


