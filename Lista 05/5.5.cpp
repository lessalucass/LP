/*5.5 Escreva um algoritmo que leia as medidas dos lados de um triângulo e escreva se ele é EQUILÁTERO, ISÓSCELES ou
ESCALENO.
OBS: triângulo equilátero: Possui os 3 lados iguais.
triângulo isósceles: Possui 2 lados iguais.
triângulo escaleno: Possui 3 lados diferentes.*/

#include <stdio.h>

int main() {
    float lado1, lado2, lado3;

    printf("Informe as medidas dos lados do triângulo:\n");
    printf("Lado 1: ");
    scanf("%f", &lado1);

    printf("Lado 2: ");
    scanf("%f", &lado2);

    printf("Lado 3: ");
    scanf("%f", &lado3);

    if (lado1 == lado2 && lado2 == lado3) {
        printf("Triângulo Equilátero\n");
    } else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3) {
        printf("Triângulo Isósceles\n");
    } else {
        printf("Triângulo Escaleno\n");
    }

    return 0;
}


