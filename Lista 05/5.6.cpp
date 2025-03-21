/*5.6 Escreva um algoritmo que leia a idade de 2 homens e 2 mulheres (considere que a idade dos homens será sempre
diferente, assim como das mulheres). Calcule e escreva a soma das idades do homem mais velho com a mulher mais nova,
e o produto das idades do homem mais novo com a mulher mais velha.*/

#include <stdio.h>

int main() {
    int idadeHomem1, idadeHomem2, idadeMulher1, idadeMulher2;

    printf("Informe a idade do primeiro homem: ");
    scanf("%d", &idadeHomem1);

    printf("Informe a idade do segundo homem: ");
    scanf("%d", &idadeHomem2);

    printf("Informe a idade da primeira mulher: ");
    scanf("%d", &idadeMulher1);

    printf("Informe a idade da segunda mulher: ");
    scanf("%d", &idadeMulher2);

    // Encontrar o homem mais velho e a mulher mais nova
    int homemMaisVelho, mulherMaisNova;
    
    if (idadeHomem1 > idadeHomem2) {
        homemMaisVelho = idadeHomem1;
    } else {
        homemMaisVelho = idadeHomem2;
    }

    if (idadeMulher1 < idadeMulher2) {
        mulherMaisNova = idadeMulher1;
    } else {
        mulherMaisNova = idadeMulher2;
    }

    // Calcular a soma das idades do homem mais velho com a mulher mais nova
    int somaIdades = homemMaisVelho + mulherMaisNova;

    // Calcular o produto das idades do homem mais novo com a mulher mais velha
    int homemMaisNovo, mulherMaisVelha;
    
    if (idadeHomem1 < idadeHomem2) {
        homemMaisNovo = idadeHomem1;
        mulherMaisVelha = idadeMulher2;
    } else {
        homemMaisNovo = idadeHomem2;
        mulherMaisVelha = idadeMulher1;
    }

    int produtoIdades = homemMaisNovo * mulherMaisVelha;

    printf("Soma das idades do homem mais velho com a mulher mais nova: %d\n", somaIdades);
    printf("Produto das idades do homem mais novo com a mulher mais velha: %d\n", produtoIdades);

    return 0;
}

