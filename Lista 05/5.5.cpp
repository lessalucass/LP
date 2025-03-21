/*5.5 Escreva um algoritmo que leia as medidas dos lados de um tri�ngulo e escreva se ele � EQUIL�TERO, IS�SCELES ou
ESCALENO.
OBS: tri�ngulo equil�tero: Possui os 3 lados iguais.
tri�ngulo is�sceles: Possui 2 lados iguais.
tri�ngulo escaleno: Possui 3 lados diferentes.*/

#include <stdio.h>

int main() {
    float lado1, lado2, lado3;

    printf("Informe as medidas dos lados do tri�ngulo:\n");
    printf("Lado 1: ");
    scanf("%f", &lado1);

    printf("Lado 2: ");
    scanf("%f", &lado2);

    printf("Lado 3: ");
    scanf("%f", &lado3);

    if (lado1 == lado2 && lado2 == lado3) {
        printf("Tri�ngulo Equil�tero\n");
    } else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3) {
        printf("Tri�ngulo Is�sceles\n");
    } else {
        printf("Tri�ngulo Escaleno\n");
    }

    return 0;
}


