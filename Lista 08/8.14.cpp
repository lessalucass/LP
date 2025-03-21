/*8.14 Escreva um algoritmo para ler 3 inteiros representando respectivamente a quantidade de votos recebidos por três
candidatos. A seguir devem ser impressas três linhas de asteriscos, onde cada uma representa graficamente o percentual
de votos que cada candidato recebeu. Após cada linha deve ser impresso o percentual de votos de cada candidato.
Considere que cada asterisco representa 5%.*/

#include <stdio.h>

int main() {
    int votos1, votos2, votos3;

    // Leitura da quantidade de votos de cada candidato
    printf("Digite a quantidade de votos do candidato 1: ");
    scanf("%d", &votos1);

    printf("Digite a quantidade de votos do candidato 2: ");
    scanf("%d", &votos2);

    printf("Digite a quantidade de votos do candidato 3: ");
    scanf("%d", &votos3);

    // Cálculo do total de votos
    int totalVotos = votos1 + votos2 + votos3;

    // Imprimir gráfico de barras e percentuais
    printf("Gráfico de Barras dos Percentuais de Votos:\n");

    // Candidato 1
    printf("Candidato 1: ");
    for (int i = 0; i < votos1 / 5; i++) {
        printf("*");
    }
    printf(" (%d%%)\n", (votos1 * 100) / totalVotos);

    // Candidato 2
    printf("Candidato 2: ");
    for (int i = 0; i < votos2 / 5; i++) {
        printf("*");
    }
    printf(" (%d%%)\n", (votos2 * 100) / totalVotos);

    // Candidato 3
    printf("Candidato 3: ");
    for (int i = 0; i < votos3 / 5; i++) {
        printf("*");
    }
    printf(" (%d%%)\n", (votos3 * 100) / totalVotos);

    return 0;
}


