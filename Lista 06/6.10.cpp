/*6.10 Escreva um algoritmo para ler as notas da 1a. e 2a. avalia��es de um aluno, calcular e imprimir a m�dia semestral.
Fa�a com que o algoritmo s� aceite notas v�lidas (uma nota v�lida deve pertencer ao intervalo [0,10]). Cada nota deve
ser validada separadamente. Deve ser impressa a mensagem "Nota inv�lida" caso a nota informada n�o perten�a ao
intervalo [0,10].*/

#include <stdio.h>

int main() {
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
    printf("A m�dia semestral do aluno �: %.1lf\n", media);

    return 0;
}

