/*9.6 Escreva um algoritmo para ler a quantidade de alunos de uma turma. Ler as notas das 2 avaliações de cada aluno,
calcular e escreva a sua nota final (média aritmética das notas das 2 avaliações). Ao final da digitação escrever também:
• A média aritmética das notas finais dos alunos aprovados (nota final igual ou superior a 6).
• O percentual de alunos aprovados em relação ao total de alunos da turma.*/

#include <stdio.h>

int main() {
    int quantidadeAlunos;
    float nota1, nota2;
    float mediaFinal;
    float somaNotasFinais = 0.0;
    int totalAprovados = 0;

    printf("Digite a quantidade de alunos na turma: ");
    scanf("%d", &quantidadeAlunos);

    for (int i = 1; i <= quantidadeAlunos; i++) {
        printf("Digite as notas (avaliação 1 e avaliação 2) do aluno %d: ", i);
        scanf("%f %f", &nota1, &nota2);

        // Calcular a média final do aluno
        mediaFinal = (nota1 + nota2) / 2;

        // Imprimir a média final do aluno
        printf("A média final do aluno %d é: %.2f\n", i, mediaFinal);

        // Verificar se o aluno está aprovado e atualizar as estatísticas
        if (mediaFinal >= 6) {
            totalAprovados++;
            somaNotasFinais += mediaFinal;
        }
    }

    // Calcular a média aritmética das notas finais dos alunos aprovados
    float mediaAprovados = (totalAprovados > 0) ? (somaNotasFinais / totalAprovados) : 0.0;

    // Calcular o percentual de alunos aprovados
    float percentualAprovados = (float)totalAprovados / quantidadeAlunos * 100;

    // Imprimir as estatísticas
    printf("Média aritmética das notas finais dos alunos aprovados: %.2f\n", mediaAprovados);
    printf("Percentual de alunos aprovados: %.2f%%\n", percentualAprovados);

    return 0;
}


