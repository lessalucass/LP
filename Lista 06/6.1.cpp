/*6.1 Escreva um algoritmo para repetir a leitura de um n�mero enquanto o valor fornecido for diferente de 0. Para cada
n�mero fornecido, imprimir se ele � NEGATIVO ou POSITIVO. Quando o n�mero 0 for fornecido a repeti��o deve ser
encerrada sem imprimir mensagem alguma.*/

#include <stdio.h>

int main() {
    int numero;

    while (1) {
        printf("Informe um n�mero (0 para sair): ");
        scanf("%d", &numero);

        if (numero == 0) {
            break; // Encerra a repeti��o quando o n�mero for igual a 0
        } else if (numero > 0) {
            printf("POSITIVO\n");
        } else {
            printf("NEGATIVO\n");
        }
    }

    return 0;
}
