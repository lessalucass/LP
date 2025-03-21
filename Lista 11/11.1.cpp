/*11.1 Escreva um algoritmo para calcular e escrever o valor de S.*/

#include <stdio.h>

int main() {
    double S = 1.0; // Inicializamos S com 1, pois o primeiro termo é 1

    for (int i = 2; i <= 50; i++) {
        double termo = (2.0 * i - 1) / i; // Cálculo do termo da série
        S += termo; // Adicionamos o termo a S
    }

    printf("O valor de S é: %lf\n", S);

    return 0;
}

