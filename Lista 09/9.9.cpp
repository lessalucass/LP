/*9.9 No planeta Alpha vive a criatura Blobs, que come precisamente 1/2 de seu suprimento de comida disponível todos os
dias. Escreva um algoritmo que leia a capacidade inicial de suprimento de comida (em Kg), e calcule quantos dias passarão
antes de Blobs coma todo esse suprimento até atingir 1 quilo ou menos. Considere que o valor inicial é sempre superior
a 1.*/

#include <stdio.h>

int main() {
    double capacidadeInicial;
    int dias = 0;

    // Ler a capacidade inicial de suprimento de comida em Kg
    printf("Digite a capacidade inicial de suprimento de comida (em Kg): ");
    scanf("%lf", &capacidadeInicial);

    // Verificar se a capacidade inicial é maior que 1 Kg
    if (capacidadeInicial <= 1.0) {
        printf("A capacidade inicial deve ser maior que 1 Kg.\n");
        return 1; // Saída com erro
    }

    // Calcular quantos dias passarão até que a comida seja menor ou igual a 1 Kg
    while (capacidadeInicial > 1.0) {
        capacidadeInicial /= 2.0; // Blobs come metade da comida todos os dias
        dias++;
    }

    printf("Passarão %d dias até que a comida de Blobs atinja 1 Kg ou menos.\n", dias);

    return 0; // Saída bem-sucedida
}




