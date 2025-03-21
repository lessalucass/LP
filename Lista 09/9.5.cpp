/*9.5 Escreva um algoritmo para ler as notas de vários alunos, calcular e escrever as seguintes médias. O último dado que
não entrará nos cálculos contém uma nota igual a 99.
• Média das notas dos alunos aprovados (nota maior ou igual a 6)
• Média das notas dos alunos em exame (nota maior ou igual a 3 e inferior a 6)*/

#include <stdio.h>

int main() {
    int nota;
    int totalAprovados = 0;
    int somaAprovados = 0;
    int totalExame = 0;
    int somaExame = 0;

    printf("Digite as notas dos alunos (digite 99 para encerrar):\n");

    while (1) {
        printf("Nota: ");
        scanf("%d", &nota);

        if (nota == 99) {
            break; // Encerrar o loop quando for inserida a nota 99
        }

        if (nota >= 6) {
            totalAprovados++;
            somaAprovados += nota;
        } else if (nota >= 3 && nota < 6) {
            totalExame++;
            somaExame += nota;
        }
    }

    // Calcular e imprimir as médias
    if (totalAprovados > 0) {
        float mediaAprovados = (float)somaAprovados / totalAprovados;
        printf("Média das notas dos alunos aprovados: %.1f\n", mediaAprovados);
    } else {
        printf("Nenhum aluno foi aprovado.\n");
    }

    if (totalExame > 0) {
        float mediaExame = (float)somaExame / totalExame;
        printf("Média das notas dos alunos em exame: %.1f\n", mediaExame);
    } else {
        printf("Nenhum aluno está em exame.\n");
    }

    return 0;
}


