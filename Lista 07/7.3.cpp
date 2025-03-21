/*7.3) Reescreva o algoritmo do exercício 7.2, para que seja impresso no final, o percentual de alunos aprovados, reprovados
ou em exame em relação a quantidade total de alunos cujas notas foram informadas.*/

#include <stdio.h>

int main() {
    int contadorAprovados = 0;
    int contadorReprovados = 0;
    int contadorExame = 0;
    int resposta;
    int contadorTotal = 0;

    do {
        float nota1, nota2, media;

        printf("Digite a primeira nota do aluno: ");
        scanf("%f", &nota1);

        printf("Digite a segunda nota do aluno: ");
        scanf("%f", &nota2);

        media = (nota1 + nota2) / 2;

        printf("A média final do aluno é: %.2f\n", media);

        if (media >= 6.0) {
            contadorAprovados++;
        } else if (media < 3.0) {
            contadorReprovados++;
        } else {
            contadorExame++;
        }
        
        contadorTotal++;

        printf("Calcular a média de outro aluno? 1.Sim 2.Não: ");
        scanf("%d", &resposta);

    } while (resposta == 1);

    printf("Quantidade de alunos aprovados: %d\n", contadorAprovados);
    printf("Quantidade de alunos reprovados: %d\n", contadorReprovados);
    printf("Quantidade de alunos em exame: %d\n", contadorExame);
    printf("Percentual de alunos aprovados: %.1f%%\n", (float)(contadorAprovados * 100) / contadorTotal);
    printf("Percentual de alunos reprovados: %.1f%%\n", (float)(contadorReprovados * 100) / contadorTotal);
    printf("Percentual de alunos em exame: %.1f%%\n", (float)(contadorExame * 100) / contadorTotal);

    return 0;
}


