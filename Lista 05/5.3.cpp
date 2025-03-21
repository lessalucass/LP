/*5.3) Escreva um algoritmo para ler as 4 notas obtidas por um aluno em 4 avalia��es. Calcular a m�dia usando a seguinte
f�rmula:
A seguir imprima a m�dia e o conceito do aluno baseado na seguinte tabela:*/

#include <stdio.h>

int main() {
    float n1, n2, n3, n4, media;
    char conceito;

    printf("Digite a nota da primeira avalia��o: ");
    scanf("%f", &n1);

    printf("Digite a nota da segunda avalia��o: ");
    scanf("%f", &n2);

    printf("Digite a nota da terceira avalia��o: ");
    scanf("%f", &n3);

    printf("Digite a nota da quarta avalia��o: ");
    scanf("%f", &n4);

    media = (n1 + n2 * 2 + n3 * 3 + n4) / 7;

    if (media >= 9.0) {
        conceito = 'A';
    } else if (media >= 7.5) {
        conceito = 'B';
    } else if (media >= 6.0) {
        conceito = 'C';
    } else {
        conceito = 'D';
    }

    printf("M�dia: %.2f\n", media);
    printf("Conceito: %c\n", conceito);

    return 0;
}

