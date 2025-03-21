/*5.7 Escreva um algoritmo que leia o valor de 3 ângulos de um triângulo e escreva se o triângulo é acutângulo, retângulo
ou obtusângulo.
OBS: triângulo retângulo: possui um ângulo reto.
triângulo obtusângulo: possui um ângulo obtuso.
triângulo acutângulo: possui 3 ângulos agudos.*/

#include <stdio.h>

int main() {
    float angulo1, angulo2, angulo3;

    printf("Informe o valor do primeiro ângulo do triângulo: ");
    scanf("%f", &angulo1);

    printf("Informe o valor do segundo ângulo do triângulo: ");
    scanf("%f", &angulo2);

    printf("Informe o valor do terceiro ângulo do triângulo: ");
    scanf("%f", &angulo3);

    // Verificar se a soma dos ângulos é igual a 180 graus
    if (angulo1 + angulo2 + angulo3 == 180) {
        // Verificar o tipo de triângulo com base nos ângulos
        if (angulo1 == 90 || angulo2 == 90 || angulo3 == 90) {
            printf("O triângulo é retângulo.\n");
        } else if (angulo1 > 90 || angulo2 > 90 || angulo3 > 90) {
            printf("O triângulo é obtusângulo.\n");
        } else {
            printf("O triângulo é acutângulo.\n");
        }
    } else {
        printf("Os ângulos informados não formam um triângulo válido.\n");
    }

    return 0;
}

