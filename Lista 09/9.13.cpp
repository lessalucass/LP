/*9.13 Supondo que a popula��o de um bairro A seja da ordem de 500 habitantes com uma taxa anual de crescimento de
5,2% ao ano e que a popula��o de um bairro B seja de 1500 habitantes com uma taxa anual de crescimento de 1,8 %,
escreva um algoritmo que calcule e escreva quantos anos ser�o necess�rios para que a popula��o do bairro A ultrapasse
a do bairro B, mantidas as taxas anuais de crescimento.*/

#include <stdio.h>

int main() {
    int populacaoA = 500; // Popula��o inicial do bairro A
    int populacaoB = 1500; // Popula��o inicial do bairro B
    double taxaCrescimentoA = 0.052; // Taxa de crescimento anual do bairro A (5,2%)
    double taxaCrescimentoB = 0.018; // Taxa de crescimento anual do bairro B (1,8%)
    int anos = 0;

    while (populacaoA <= populacaoB) {
        populacaoA += populacaoA * taxaCrescimentoA;
        populacaoB += populacaoB * taxaCrescimentoB;
        anos++;
    }

    printf("Ser�o necess�rios %d anos para que a popula��o do bairro A ultrapasse a do bairro B.\n", anos);

    return 0;
}

