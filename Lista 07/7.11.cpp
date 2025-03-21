/*7.11 Escreva um algoritmo para imprimir os números de 5 a 15 utilizando uma estrutura FAÇA/ENQUANTO e um contador.*/

#include <stdio.h>

int main() {
    int contador = 5; // Inicializa o contador com 5

    do {
        printf("%d\n", contador); // Imprime o valor do contador
        contador++; // Incrementa o contador em 1
    } while (contador <= 15); // Enquanto o contador for menor ou igual a 15

    return 0;
}

