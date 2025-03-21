/*6.11 Reescreva o algoritmo para o problema 6.10 de forma que no final seja impressa a mensagem “Novo cálculo (1.Sim
2.Não)” solicitando ao usuário que informe um código (1 ou 2) indicando se ele deseja ou não executar o algoritmo
novamente. Se for informado o código 1 deve ser repetida a execução de todo o algoritmo para permitir um novo cálculo,
caso contrário ele deve ser encerrado.*/

#include <stdio.h>

int main() {
    int codigo;
    
    do {
        double nota1, nota2, media;
        
        // Solicita a nota da 1ª avaliação até que seja válida
        do {
            printf("Digite a nota da 1ª avaliação (entre 0 e 10): ");
            scanf("%lf", &nota1);

            if (nota1 < 0 || nota1 > 10) {
                printf("Nota inválida. A nota deve estar entre 0 e 10.\n");
            }
        } while (nota1 < 0 || nota1 > 10);

        // Solicita a nota da 2ª avaliação até que seja válida
        do {
            printf("Digite a nota da 2ª avaliação (entre 0 e 10): ");
            scanf("%lf", &nota2);

            if (nota2 < 0 || nota2 > 10) {
                printf("Nota inválida. A nota deve estar entre 0 e 10.\n");
            }
        } while (nota2 < 0 || nota2 > 10);

        // Calcula a média semestral
        media = (nota1 + nota2) / 2;

        // Exibe a média semestral
        printf("A média semestral do aluno é: %.2lf\n", media);

        // Pergunta ao usuário se deseja fazer outro cálculo
        printf("Novo cálculo (1.Sim 2.Não): ");
        scanf("%d", &codigo);

    } while (codigo == 1);

    return 0;
}

