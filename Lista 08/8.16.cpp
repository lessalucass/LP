/*8.16 Ler 10 valores e escrever quantos destes valores são negativos.*/

#include <stdio.h>

int main() {
    int valores[10];
    int contadorNegativos = 0;

    // Ler os 10 valores
    for (int i = 0; i < 10; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &valores[i]);

        if (valores[i] < 0) {
            contadorNegativos++;
        }
    }

    // Imprimir a quantidade de valores negativos
    printf("Quantidade de valores negativos: %d\n", contadorNegativos);

    return 0;
}

