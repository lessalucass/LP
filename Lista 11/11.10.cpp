/*11.10 Escreva um algoritmo para ler um número inteiro N (só aceitar valores maiores que zero. Caso o N não seja maior
que zero deverá ser lido um novo valor para o N) e escrever se é ou não PRIMO. OBS: Considere que o número 1 não é
primo.*/

#include <stdio.h>
#include <stdbool.h>

// Função para verificar se um número é primo
bool ehPrimo(int numero) {
    if (numero <= 1) {
        return false;
    }
    for (int i = 2; i * i <= numero; i++) {
        if (numero % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int N;

    // Ler um número maior que zero
    do {
        printf("Digite um número maior que zero: ");
        scanf("%d", &N);

        if (N <= 0) {
            printf("O número deve ser maior que zero. Tente novamente.\n");
        }
    } while (N <= 0);

    // Verificar se N é primo
    if (ehPrimo(N)) {
        printf("%d é um número primo.\n", N);
    } else {
        printf("%d não é um número primo.\n", N);
    }

    return 0;
}

