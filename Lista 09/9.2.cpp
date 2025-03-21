/*9.2 Ler a quantidade de alunos existentes em uma turma, ler as notas destes alunos, calcular e imprimir a m�dia aritm�tica
destas notas.*/

#include <stdio.h>

int main() {
    int quantidadeAlunos;
    float somaNotas = 0.0;

    // Ler a quantidade de alunos
    printf("Digite a quantidade de alunos na turma: ");
    scanf("%d", &quantidadeAlunos);

    // Verificar se a quantidade de alunos � maior que zero
    if (quantidadeAlunos <= 0) {
        printf("A quantidade de alunos deve ser maior que zero.\n");
        return 1; // Sa�da com erro
    }

    // Ler as notas dos alunos e calcular a soma
    for (int i = 1; i <= quantidadeAlunos; i++) {
        float nota;
        printf("Digite a nota do aluno %d: ", i);
        scanf("%f", &nota);

        // Verificar se a nota est� no intervalo de 0 a 10
        if (nota < 0 || nota > 10) {
            printf("A nota do aluno deve estar no intervalo de 0 a 10.\n");
            return 1; // Sa�da com erro
        }

        somaNotas += nota;
    }

    // Calcular a m�dia aritm�tica
    float media = somaNotas / quantidadeAlunos;

    // Imprimir a m�dia
    printf("A m�dia das notas dos %d alunos �: %.1f\n", quantidadeAlunos, media);

    return 0; // Sa�da bem-sucedida
}

