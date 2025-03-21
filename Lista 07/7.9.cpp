/*7.9 Escreva um algoritmo que leia v�rios valores e imprima quantos valores informados s�o menores que o imediatamente
anterior. O algoritmo termina a ser informado um n�mero negativo (que n�o deve ser considerado na contagem).*/

#include <stdio.h>

int main() {
    int valor, anterior, contador = 0;

    printf("Digite um valor (n�mero negativo para encerrar): ");
    scanf("%d", &valor);

    while (valor >= 0) {
        if (valor < anterior) {
            contador++;
        }

        anterior = valor;

        printf("Digite um valor (n�mero negativo para encerrar): ");
        scanf("%d", &valor);
    }

    printf("Quantidade de valores menores que o imediatamente anterior: %d\n", contador);

    return 0;
}

