/*9.13 Supondo que a população de um bairro A seja da ordem de 500 habitantes com uma taxa anual de crescimento de
5,2% ao ano e que a população de um bairro B seja de 1500 habitantes com uma taxa anual de crescimento de 1,8 %,
escreva um algoritmo que calcule e escreva quantos anos serão necessários para que a população do bairro A ultrapasse
a do bairro B, mantidas as taxas anuais de crescimento.*/

#include <stdio.h>

int main() {
    int populacaoA = 500; // População inicial do bairro A
    int populacaoB = 1500; // População inicial do bairro B
    double taxaCrescimentoA = 0.052; // Taxa de crescimento anual do bairro A (5,2%)
    double taxaCrescimentoB = 0.018; // Taxa de crescimento anual do bairro B (1,8%)
    int anos = 0;

    while (populacaoA <= populacaoB) {
        populacaoA += populacaoA * taxaCrescimentoA;
        populacaoB += populacaoB * taxaCrescimentoB;
        anos++;
    }

    printf("Serão necessários %d anos para que a população do bairro A ultrapasse a do bairro B.\n", anos);

    return 0;
}

