/*9.1 Ler 10 valores, calcular e escrever a média aritmética destes valores.*/

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

    // Calcular a média
    float media = (float)soma / 10;

    // Imprimir a média
    printf("A média dos 10 valores é: %.1f\n", media);

    return 0;
}

