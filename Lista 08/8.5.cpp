/*8.5 Escreva um algoritmo para ler um n�mero inteiro e escrev�-lo na tela 10 vezes utilizando uma estrutura de repeti��o.*/

#include <stdio.h>

int main() {
    int numero;

    printf("Digite um n�mero inteiro: ");
    scanf("%d", &numero);

    for (int i = 0; i < 10; i++) {
        printf("%d\n", numero);
    }

    return 0;
}

