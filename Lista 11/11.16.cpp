/*11.16 Escreva um algoritmo para ler várias duplas de valores. Cada dupla representa a idade de um aluno e a sua
respectiva nota. Calcular e escrever:
• A idade do aluno que obteve a maior nota.
• A nota do aluno mais velho.
OBS: O algoritmo será encerrado imediatamente após o usuário fornecer uma idade negativa (sem fornecer a respectiva
nota).*/

#include <stdio.h>

#include <stdio.h>

int main() {
    int idade, idadeAlunoMaisVelho = -1;
    float nota, maiorNota = -1.0;

    printf("Digite a idade e a nota do aluno (para encerrar, digite uma idade negativa):\n");

    while (1) {
        printf("Idade: ");
        scanf("%d", &idade);

        if (idade < 0) {
            break;
        }

        printf("Nota: ");
        scanf("%f", &nota);

        if (nota > maiorNota) {
            maiorNota = nota;
            idadeAlunoMaisVelho = idade;
        }

        idadeAlunoMaisVelho = (idade > idadeAlunoMaisVelho) ? idade : idadeAlunoMaisVelho;
    }

    if (idadeAlunoMaisVelho == -1) {
        printf("Nenhuma informação válida fornecida.\n");
    } else {
        printf("Idade do aluno com a maior nota: %d\n", idadeAlunoMaisVelho);
        printf("Nota do aluno mais velho: %.2f\n", maiorNota);
    }

    return 0;
}

