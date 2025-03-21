/*9.11 Ler um valor A e um valor N. Imprimir a soma dos N n�meros a partir de A(inclusive). Caso N seja negativo ou ZERO,
dever� ser lido um novo N(apenas N).*/

#include <stdio.h>

int main() {
    int A, N;
    int soma = 0;

    // Ler o valor A
    printf("Digite o valor A: ");
    scanf("%d", &A);

    // Ler o valor N e validar se � negativo ou zero
    do {
        printf("Digite o valor N (positivo): ");
        scanf("%d", &N);
    } while (N <= 0);

    // Calcular a soma dos N n�meros a partir de A
    for (int i = 0; i < N; i++) {
        soma += A + i;
    }

    // Imprimir a soma
    printf("A soma dos %d n�meros a partir de %d �: %d\n", N, A, soma);

    return 0;
}


