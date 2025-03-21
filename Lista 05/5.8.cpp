/*5.8 Um mercado est� vendendo frutas com a seguinte tabela de pre�os:
At� 5 Kg Acima de 5 Kg
Morango: R$ 5,00 p/Kg Morango: R$ 4,00 p/Kg
Ma��: R$ 3,00 p/Kg Ma��:R$ 2,00 p/Kg
Se o cliente comprar mais de 8 Kg em frutas ou o valor total da compra ultrapassar R$ 35,00, receber� ainda um desconto
de 20 % sobre esse total. Escreva um algoritmo para ler a quantidade (em Kg) de morangos e a quantidade (em Kg) de
ma��s adquiridas e escreva o valor a ser pago pelo cliente.*/

#include <stdio.h>

int main() {
    float kgMorango, kgMaca;
    float precoMorango, precoMaca;
    float totalSemDesconto, totalComDesconto;

    printf("Informe a quantidade (em Kg) de morangos comprados: ");
    scanf("%f", &kgMorango);

    printf("Informe a quantidade (em Kg) de ma��s compradas: ");
    scanf("%f", &kgMaca);

    // Calcular o pre�o dos morangos
    if (kgMorango <= 5) {
        precoMorango = kgMorango * 5.0;
    } else {
        precoMorango = kgMorango * 4.0;
    }

    // Calcular o pre�o das ma��s
    if (kgMaca <= 5) {
        precoMaca = kgMaca * 3.0;
    } else {
        precoMaca = kgMaca * 2.0;
    }

    // Calcular o total sem desconto
    totalSemDesconto = precoMorango + precoMaca;

    // Aplicar desconto se necess�rio
    if ((kgMorango + kgMaca) > 8 || totalSemDesconto > 35.0) {
        totalComDesconto = totalSemDesconto - (totalSemDesconto * 0.2);
    } else {
        totalComDesconto = totalSemDesconto;
    }

    printf("Valor a ser pago pelo cliente: R$ %.2f\n", totalComDesconto);

    return 0;
}

