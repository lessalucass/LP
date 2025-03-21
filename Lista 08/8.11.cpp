/*8.11 Escreva um algoritmo para ler dois valores. Aceitar a dupla apenas se o segundo valor informado for maior que o
primeiro. Caso isso não aconteça deve ser impressa a mensagem “Valores inválidos” e repetida a leitura dos dois valores.
Imprimir os inteiros existentes entre os 2 valores lidos (incluir os valores lidos).*/

#include <stdio.h>

int main() {
    int primeiro, segundo;

    do {
        printf("Digite o primeiro valor: ");
        scanf("%d", &primeiro);
        
        printf("Digite o segundo valor (maior que o primeiro): ");
        scanf("%d", &segundo);
        
        if (segundo <= primeiro) {
            printf("Valores inválidos. O segundo valor deve ser maior que o primeiro.\n");
        }
    } while (segundo <= primeiro);

    printf("Valores entre %d e %d (inclusive):\n", primeiro, segundo);

    for (int i = primeiro; i <= segundo; i++) {
        printf("%d ", i);
    }

    printf("\n");

    return 0;
}

