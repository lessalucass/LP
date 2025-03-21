/*9.8 Escreva um algoritmo que forne�a quantos n�meros devem existir em sequ�ncia a partir do 1 (1, 2, 3, 4, ...) para que
a sua soma ultrapasse a 100 o m�nimo poss�vel.*/

#include <stdio.h>

int main() {
    int soma = 0;
    int contador = 1;

    while (soma <= 100) {
        soma += contador;
        contador++;
    }

    printf("A soma ultrapassa 100 quando %d n�meros est�o em sequ�ncia.\n", contador - 1);

    return 0;
}


