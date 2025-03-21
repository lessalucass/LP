/*11.2 Escreva um algoritmo para calcular e escrever o valor de S.*/

#include <stdio.h>

int main() {
    double S = 0.0;

    for (int i = 1; i <= 10; i++) {
        double termo = (double)i / (i * i);
        if (i % 2 == 0) {
            S -= termo; // Subtrair os termos pares
        } else {
            S += termo; // Adicionar os termos ímpares
        }
    }

    printf("O valor de S é: %lf\n", S);

    return 0;
}


