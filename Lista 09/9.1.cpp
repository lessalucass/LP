/*9.1 Ler 10 valores, calcular e escrever a m�dia aritm�tica destes valores.*/

#include <stdio.h>

int main() {
    int valores[10];
    int soma = 0;
    int contador = 0;

    // Ler os 10 valores usando um loop while
    while (contador < 10) {
        printf("Digite o valor %d: ", contador + 1);
        scanf("%d", &valores[contador]);
        soma += valores[contador];
        contador++;
    }

    // Calcular a m�dia
    float media = (float)soma / 10;

    // Imprimir a m�dia
    printf("A m�dia dos 10 valores �: %.1f\n", media);

    return 0;
}

