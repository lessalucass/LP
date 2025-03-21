/*9.14 A seguinte sequ�ncia de n�meros 0 1 1 2 3 5 8 13 21... � conhecida como s�rie de Fibonacci. Nessa sequ�ncia, cada
n�mero, depois dos 2 primeiros, � igual � soma dos 2 anteriores. Escreva um algoritmo que calcule e escreva os 20
primeiros termos da s�rie.*/

#include <stdio.h>

int main() {
    int termo1 = 0;
    int termo2 = 1;
    int termoAtual;

    printf("Os primeiros 20 termos da s�rie de Fibonacci s�o:\n");

    // Imprimir os dois primeiros termos
    printf("%d %d ", termo1, termo2);

    // Calcular e imprimir os pr�ximos 18 termos
    for (int i = 3; i <= 20; i++) {
        termoAtual = termo1 + termo2;
        printf("%d ", termoAtual);

        termo1 = termo2;
        termo2 = termoAtual;
    }

    printf("\n");

    return 0;
}


