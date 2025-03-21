/*5.4 Um posto est� vendendo combust�veis com a seguinte tabela de descontos:
�lcool: At� 20 litros, desconto de 3 % por litro.
Acima de 20 litros, desconto de 5 % por litro.
Gasolina: At� 15 litros, desconto de 3,5 % por litro.
Acima de 15 litros, desconto de 6 % por litro
Escreva um algoritmo que leia o n�mero de litros vendidos, o tipo de combust�vel (codificado da seguinte forma: 1-�lcool
2-Gasolina), o pre�o do combust�vel, calcule e imprima o valor a ser pago pelo cliente. OBS: Considere que ser�o
informados apenas c�digos v�lidos.*/

#include <stdio.h>

int main() {
    int tipoCombustivel;
    float litrosVendidos, preco, desconto, valorPago;

	printf("Informe a quantidade de litros vendidos: ");
    scanf("%f", &litrosVendidos);
    
    printf("Informe o tipo de combust�vel (1-�lcool / 2-Gasolina): ");
    scanf("%d", &tipoCombustivel);

    printf("Informe o pre�o por litro: ");
    scanf("%f", &preco);

    if (tipoCombustivel == 1) { // �lcool
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
        printf("Tipo de combust�vel inv�lido.\n");
        return 1;
    }

    valorPago = litrosVendidos * preco * (1 - desconto);

    printf("Valor a ser pago: R$ %.2f\n", valorPago);

    return 0;
}


