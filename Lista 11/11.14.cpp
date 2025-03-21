/*11.14 Escreva um algoritmo para calcular e escrever a maior nota entre N notas lidas. O valor de N ser� informado pelo
usu�rio.*/

#include <stdio.h>

int main() {
    int N;
    
    // Pedir ao usu�rio o n�mero de notas a serem lidas
    printf("Digite a quantidade de notas a serem lidas: ");
    scanf("%d", &N);

    if (N <= 0) {
        printf("A quantidade de notas deve ser maior que zero.\n");
        return 1; // Sa�da do programa com erro
    }

    float maiorNota = -1.0; // Inicializa a maiorNota com um valor negativo

    // Loop para ler as notas e encontrar a maior nota
    for (int i = 1; i <= N; i++) {
        float nota;
        printf("Digite a nota %d: ", i);
        scanf("%f", &nota);

        // Verifica se a nota lida � maior que a maiorNota atual
        if (nota > maiorNota) {
            maiorNota = nota;
        }
    }

    // Imprime a maior nota encontrada
    printf("A maior nota entre as %d notas lidas �: %.2f\n", N, maiorNota);

    return 0; // Sa�da do programa sem erro
}

