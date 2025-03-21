/*9.4 Reescreva o exercício anterior considerando que o primeiro pode ser maior que o segundo e vice-versa.*/

#include <stdio.h>

int main() {
    int valor1, valor2;

    // Ler os dois valores
    printf("Digite o primeiro valor: ");
    scanf("%d", &valor1);

    printf("Digite o segundo valor: ");
    scanf("%d", &valor2);

    int soma = 0;
    int inicio, fim;

    // Determinar qual valor é menor para definir os limites do loop
    if (valor1 <= valor2) {
        inicio = valor1;
        fim = valor2;
    } else {
        inicio = valor2;
        fim = valor1;
    }

    // Calcular a soma dos números inteiros entre os dois valores
    for (int i = inicio; i <= fim; i++) {
        soma += i;
    }

    // Imprimir a soma
    printf("A soma dos números inteiros entre %d e %d é: %d\n", inicio, fim, soma);

    return 0; // Saída bem-sucedida
}

