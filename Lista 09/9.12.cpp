/*9.12 Ler um valor X e um valor Z (se Z for menor que X deve ser lido um novo valor para Z). Contar quantos números
inteiros devemos somar em sequência ( a partir do X inclusive) para que a soma ultrapasse a Z o mínimo possível. Escrever
o valor final da contagem.*/

#include <stdio.h>

int main() {
    int X, Z;
    int soma = 0;
    int contagem = 0;

    // Ler o valor X
    printf("Digite o valor X: ");
    scanf("%d", &X);

    // Ler o valor Z e validar se Z é menor que X
    do {
        printf("Digite o valor Z (maior ou igual a X): ");
        scanf("%d", &Z);
    } while (Z < X);

    // Calcular quantos números inteiros devem ser somados para ultrapassar Z
    while (soma <= Z) {
        soma += X;
        X++;
        contagem++;
    }

    // Imprimir o valor final da contagem
    printf("Devem ser somados %d números para ultrapassar %d.\n", contagem, Z);

    return 0;
}

