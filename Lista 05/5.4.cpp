/*5.4 Um posto está vendendo combustíveis com a seguinte tabela de descontos:
Álcool: Até 20 litros, desconto de 3 % por litro.
Acima de 20 litros, desconto de 5 % por litro.
Gasolina: Até 15 litros, desconto de 3,5 % por litro.
Acima de 15 litros, desconto de 6 % por litro
Escreva um algoritmo que leia o número de litros vendidos, o tipo de combustível (codificado da seguinte forma: 1-álcool
2-Gasolina), o preço do combustível, calcule e imprima o valor a ser pago pelo cliente. OBS: Considere que serão
informados apenas códigos válidos.*/

#include <stdio.h>

int main() {
    int tipoCombustivel;
    float litrosVendidos, preco, desconto, valorPago;

	printf("Informe a quantidade de litros vendidos: ");
    scanf("%f", &litrosVendidos);
    
    printf("Informe o tipo de combustível (1-Álcool / 2-Gasolina): ");
    scanf("%d", &tipoCombustivel);

    printf("Informe o preço por litro: ");
    scanf("%f", &preco);

    if (tipoCombustivel == 1) { // Álcool
        if (litrosVendidos <= 20) {
            desconto = 0.03;
        } else {
            desconto = 0.05;
        }
    } else if (tipoCombustivel == 2) { // Gasolina
        if (litrosVendidos <= 15) {
            desconto = 0.035;
        } else {
            desconto = 0.06;
        }
    } else {
        printf("Tipo de combustível inválido.\n");
        return 1;
    }

    valorPago = litrosVendidos * preco * (1 - desconto);

    printf("Valor a ser pago: R$ %.2f\n", valorPago);

    return 0;
}


