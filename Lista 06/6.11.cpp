/*6.11 Reescreva o algoritmo para o problema 6.10 de forma que no final seja impressa a mensagem �Novo c�lculo (1.Sim
2.N�o)� solicitando ao usu�rio que informe um c�digo (1 ou 2) indicando se ele deseja ou n�o executar o algoritmo
novamente. Se for informado o c�digo 1 deve ser repetida a execu��o de todo o algoritmo para permitir um novo c�lculo,
caso contr�rio ele deve ser encerrado.*/

#include <stdio.h>

int main() {
    int codigo;
    
    do {
        double nota1, nota2, media;
        
        // Solicita a nota da 1� avalia��o at� que seja v�lida
        do {
            printf("Digite a nota da 1� avalia��o (entre 0 e 10): ");
            scanf("%lf", &nota1);

            if (nota1 < 0 || nota1 > 10) {
                printf("Nota inv�lida. A nota deve estar entre 0 e 10.\n");
            }
        } while (nota1 < 0 || nota1 > 10);

        // Solicita a nota da 2� avalia��o at� que seja v�lida
        do {
            printf("Digite a nota da 2� avalia��o (entre 0 e 10): ");
            scanf("%lf", &nota2);

            if (nota2 < 0 || nota2 > 10) {
                printf("Nota inv�lida. A nota deve estar entre 0 e 10.\n");
            }
        } while (nota2 < 0 || nota2 > 10);

        // Calcula a m�dia semestral
        media = (nota1 + nota2) / 2;

        // Exibe a m�dia semestral
        printf("A m�dia semestral do aluno �: %.2lf\n", media);

        // Pergunta ao usu�rio se deseja fazer outro c�lculo
        printf("Novo c�lculo (1.Sim 2.N�o): ");
        scanf("%d", &codigo);

    } while (codigo == 1);

    return 0;
}

