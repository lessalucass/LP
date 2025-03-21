/*9.3 Ler 2 valores (considere que o primeiro valor lido sempre será menor que o segundo), calcular e escrever a soma dos
números inteiros existentes entre eles(incluindo os 2 valores lidos na soma).*/


#include <stdio.h>

int main() {
    int valor1, valor2;

    // Ler os dois valores (o primeiro deve ser menor que o segundo)
    printf("Digite o primeiro valor: ");
    scanf("%d", &valor1);

    printf("Digite o segundo valor (maior que o primeiro): ");
    scanf("%d", &valor2);

    // Verificar se o primeiro valor é realmente menor que o segundo
    if (valor1 >= valor2) {
        printf("O primeiro valor deve ser menor que o segundo.\n");
        return 1; // Saída com erro
    }

    int soma = 0;

    // Calcular a soma dos números inteiros entre os dois valores
    for (int i = valor1; i <= valor2; i++) {
        soma += i;
    }

    // Imprimir a soma
    printf("A soma dos números inteiros entre %d e %d é: %d\n", valor1, valor2, soma);

    return 0; // Saída bem-sucedida
}

