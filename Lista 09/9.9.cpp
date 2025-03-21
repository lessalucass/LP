/*9.9 No planeta Alpha vive a criatura Blobs, que come precisamente 1/2 de seu suprimento de comida dispon�vel todos os
dias. Escreva um algoritmo que leia a capacidade inicial de suprimento de comida (em Kg), e calcule quantos dias passar�o
antes de Blobs coma todo esse suprimento at� atingir 1 quilo ou menos. Considere que o valor inicial � sempre superior
a 1.*/

#include <stdio.h>

int main() {
    double capacidadeInicial;
    int dias = 0;

    // Ler a capacidade inicial de suprimento de comida em Kg
    printf("Digite a capacidade inicial de suprimento de comida (em Kg): ");
    scanf("%lf", &capacidadeInicial);

    // Verificar se a capacidade inicial � maior que 1 Kg
    if (capacidadeInicial <= 1.0) {
        printf("A capacidade inicial deve ser maior que 1 Kg.\n");
        return 1; // Sa�da com erro
    }

    // Calcular quantos dias passar�o at� que a comida seja menor ou igual a 1 Kg
    while (capacidadeInicial > 1.0) {
        capacidadeInicial /= 2.0; // Blobs come metade da comida todos os dias
        dias++;
    }

    printf("Passar�o %d dias at� que a comida de Blobs atinja 1 Kg ou menos.\n", dias);

    return 0; // Sa�da bem-sucedida
}




