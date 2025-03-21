/*8.2 Escreva um algoritmo que imprima na tela os 10 primeiros números inteiros maiores que 100 utilizando uma estrutura
de repetição.*/

#include <stdio.h>

int main() {
    int numero = 101; // Inicializa o número com 101

    for (int i = 0; i < 10; i++) {
        printf("%d\n", numero);
        numero++; // Incrementa o número em 1 para obter o próximo número
    }

    return 0;
}

