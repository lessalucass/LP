/*6.1 Escreva um algoritmo para repetir a leitura de um número enquanto o valor fornecido for diferente de 0. Para cada
número fornecido, imprimir se ele é NEGATIVO ou POSITIVO. Quando o número 0 for fornecido a repetição deve ser
encerrada sem imprimir mensagem alguma.*/

#include <stdio.h>

int main() {
    int numero;

    while (1) {
        printf("Informe um número (0 para sair): ");
        scanf("%d", &numero);

        if (numero == 0) {
            break; // Encerra a repetição quando o número for igual a 0
        } else if (numero > 0) {
            printf("POSITIVO\n");
        } else {
            printf("NEGATIVO\n");
        }
    }

    return 0;
}
