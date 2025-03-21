/*6.10 Escreva um algoritmo para ler as notas da 1a. e 2a. avaliações de um aluno, calcular e imprimir a média semestral.
Faça com que o algoritmo só aceite notas válidas (uma nota válida deve pertencer ao intervalo [0,10]). Cada nota deve
ser validada separadamente. Deve ser impressa a mensagem "Nota inválida" caso a nota informada não pertença ao
intervalo [0,10].*/

#include <stdio.h>

int main() {
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
    printf("A média semestral do aluno é: %.1lf\n", media);

    return 0;
}

