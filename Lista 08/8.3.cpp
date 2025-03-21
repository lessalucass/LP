/*8.3 Escreva um algoritmo que imprima os números ímpares existentes de entre 1 (inclusive) e 9 (inclusive).*/

#include <stdio.h>

int main() {
    for (int i = 1; i <= 9; i += 2) {
        printf("%d\n", i);
    }

    return 0;
}

