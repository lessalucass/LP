/*9.8 Escreva um algoritmo que forneça quantos números devem existir em sequência a partir do 1 (1, 2, 3, 4, ...) para que
a sua soma ultrapasse a 100 o mínimo possível.*/

#include <stdio.h>

int main() {
    int soma = 0;
    int contador = 1;

    while (soma <= 100) {
        soma += contador;
        contador++;
    }

    printf("A soma ultrapassa 100 quando %d números estão em sequência.\n", contador - 1);

    return 0;
}


