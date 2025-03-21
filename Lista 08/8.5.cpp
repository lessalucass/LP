/*8.5 Escreva um algoritmo para ler um número inteiro e escrevê-lo na tela 10 vezes utilizando uma estrutura de repetição.*/

#include <stdio.h>

int main() {
    int numero;

    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    for (int i = 0; i < 10; i++) {
        printf("%d\n", numero);
    }

    return 0;
}

