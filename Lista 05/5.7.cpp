/*5.7 Escreva um algoritmo que leia o valor de 3 �ngulos de um tri�ngulo e escreva se o tri�ngulo � acut�ngulo, ret�ngulo
ou obtus�ngulo.
OBS: tri�ngulo ret�ngulo: possui um �ngulo reto.
tri�ngulo obtus�ngulo: possui um �ngulo obtuso.
tri�ngulo acut�ngulo: possui 3 �ngulos agudos.*/

#include <stdio.h>

int main() {
    float angulo1, angulo2, angulo3;

    printf("Informe o valor do primeiro �ngulo do tri�ngulo: ");
    scanf("%f", &angulo1);

    printf("Informe o valor do segundo �ngulo do tri�ngulo: ");
    scanf("%f", &angulo2);

    printf("Informe o valor do terceiro �ngulo do tri�ngulo: ");
    scanf("%f", &angulo3);

    // Verificar se a soma dos �ngulos � igual a 180 graus
    if (angulo1 + angulo2 + angulo3 == 180) {
        // Verificar o tipo de tri�ngulo com base nos �ngulos
        if (angulo1 == 90 || angulo2 == 90 || angulo3 == 90) {
            printf("O tri�ngulo � ret�ngulo.\n");
        } else if (angulo1 > 90 || angulo2 > 90 || angulo3 > 90) {
            printf("O tri�ngulo � obtus�ngulo.\n");
        } else {
            printf("O tri�ngulo � acut�ngulo.\n");
        }
    } else {
        printf("Os �ngulos informados n�o formam um tri�ngulo v�lido.\n");
    }

    return 0;
}

