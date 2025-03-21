/*11.10 Escreva um algoritmo para ler um n�mero inteiro N (s� aceitar valores maiores que zero. Caso o N n�o seja maior
que zero dever� ser lido um novo valor para o N) e escrever se � ou n�o PRIMO. OBS: Considere que o n�mero 1 n�o �
primo.*/

#include <stdio.h>
#include <stdbool.h>

// Fun��o para verificar se um n�mero � primo
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

    // Ler um n�mero maior que zero
    do {
        printf("Digite um n�mero maior que zero: ");
        scanf("%d", &N);

        if (N <= 0) {
            printf("O n�mero deve ser maior que zero. Tente novamente.\n");
        }
    } while (N <= 0);

    // Verificar se N � primo
    if (ehPrimo(N)) {
        printf("%d � um n�mero primo.\n", N);
    } else {
        printf("%d n�o � um n�mero primo.\n", N);
    }

    return 0;
}

