/*11.11 Escreva um algoritmo que imprima a tabuada (de 1 a 10) para os números de 1 a 5.*/

#include <stdio.h>

int main() {
    for (int numero = 1; numero <= 5; numero++) {
        printf("Tabuada do %d:\n", numero);
        
        for (int multiplicador = 1; multiplicador <= 10; multiplicador++) {
            printf("%d x %d = %d\n", numero, multiplicador, numero * multiplicador);
        }

        printf("\n"); // Adiciona uma linha em branco após cada tabuada
    }

    return 0;
}

