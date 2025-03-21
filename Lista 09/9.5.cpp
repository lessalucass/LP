/*9.5 Escreva um algoritmo para ler as notas de v�rios alunos, calcular e escrever as seguintes m�dias. O �ltimo dado que
n�o entrar� nos c�lculos cont�m uma nota igual a 99.
� M�dia das notas dos alunos aprovados (nota maior ou igual a 6)
� M�dia das notas dos alunos em exame (nota maior ou igual a 3 e inferior a 6)*/

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

    // Calcular e imprimir as m�dias
    if (totalAprovados > 0) {
        float mediaAprovados = (float)somaAprovados / totalAprovados;
        printf("M�dia das notas dos alunos aprovados: %.1f\n", mediaAprovados);
    } else {
        printf("Nenhum aluno foi aprovado.\n");
    }

    if (totalExame > 0) {
        float mediaExame = (float)somaExame / totalExame;
        printf("M�dia das notas dos alunos em exame: %.1f\n", mediaExame);
    } else {
        printf("Nenhum aluno est� em exame.\n");
    }

    return 0;
}


