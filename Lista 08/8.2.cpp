/*8.2 Escreva um algoritmo que imprima na tela os 10 primeiros n�meros inteiros maiores que 100 utilizando uma estrutura
de repeti��o.*/

#include <stdio.h>

int main() {
    int numero = 101; // Inicializa o n�mero com 101

    for (int i = 0; i < 10; i++) {
        printf("%d\n", numero);
        numero++; // Incrementa o n�mero em 1 para obter o pr�ximo n�mero
    }

    return 0;
}

