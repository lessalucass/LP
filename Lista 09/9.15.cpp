/*9.15 Ler um valor (só deve aceitar valores positivos), calcular e escrever seu respectivo fatorial.
OBS: O fatorial de 0 é igual a 1.
Fatorial de n = n * (n-1) * (n-2) * (n-3) * ... * 1*/

#include <stdio.h>

int main() {
    int numero;
    unsigned long long fatorial = 1;

    // Ler um valor positivo
    do {
        printf("Digite um valor positivo: ");
        scanf("%d", &numero);
    } while (numero < 0);

    // Calcular o fatorial
    for (int i = 1; i <= numero; i++) {
        fatorial *= i;
    }

    // Imprimir o fatorial
    printf("O fatorial de %d é %llu.\n", numero, fatorial);

    return 0;
}

