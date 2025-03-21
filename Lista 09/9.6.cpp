/*9.6 Escreva um algoritmo para ler a quantidade de alunos de uma turma. Ler as notas das 2 avalia��es de cada aluno,
calcular e escreva a sua nota final (m�dia aritm�tica das notas das 2 avalia��es). Ao final da digita��o escrever tamb�m:
� A m�dia aritm�tica das notas finais dos alunos aprovados (nota final igual ou superior a 6).
� O percentual de alunos aprovados em rela��o ao total de alunos da turma.*/

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
        printf("Digite as notas (avalia��o 1 e avalia��o 2) do aluno %d: ", i);
        scanf("%f %f", &nota1, &nota2);

        // Calcular a m�dia final do aluno
        mediaFinal = (nota1 + nota2) / 2;

        // Imprimir a m�dia final do aluno
        printf("A m�dia final do aluno %d �: %.2f\n", i, mediaFinal);

        // Verificar se o aluno est� aprovado e atualizar as estat�sticas
        if (mediaFinal >= 6) {
            totalAprovados++;
            somaNotasFinais += mediaFinal;
        }
    }

    // Calcular a m�dia aritm�tica das notas finais dos alunos aprovados
    float mediaAprovados = (totalAprovados > 0) ? (somaNotasFinais / totalAprovados) : 0.0;

    // Calcular o percentual de alunos aprovados
    float percentualAprovados = (float)totalAprovados / quantidadeAlunos * 100;

    // Imprimir as estat�sticas
    printf("M�dia aritm�tica das notas finais dos alunos aprovados: %.2f\n", mediaAprovados);
    printf("Percentual de alunos aprovados: %.2f%%\n", percentualAprovados);

    return 0;
}


