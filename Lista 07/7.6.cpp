/*7.6 Um Posto de combustíveis deseja determinar qual de seus produtos tem a preferência de seus clientes. Escreva um
algoritmo para ler o tipo de combustível abastecido (codificado da seguinte forma: 1.Álcool 2.Gasolina 3.Diesel 4.Fim).
Caso o usuário informe um código inválido (fora da faixa de 1 a 4) deve ser solicitado um novo código (até que seja válido).
Ao ser informado o código do combustível, o seu respectivo nome deve ser impresso na tela. O programa será encerrado
quando o código informado for o número 4 escrevendo então a mensagem: "MUITO OBRIGADO" e a quantidade de
clientes que abasteceram cada tipo de combustível.*/

#include <stdio.h>

int main() {
    int codigo, alcool = 0, gasolina = 0, diesel = 0;

    printf("Informe o tipo de combustível abastecido:\n");
    printf("1. Álcool\n");
    printf("2. Gasolina\n");
    printf("3. Diesel\n");
    printf("4. Fim\n");

    while (1) {
        printf("Digite o código (1 a 4): ");
        scanf("%d", &codigo);

        switch (codigo) {
            case 1:
                alcool++;
                break;
            case 2:
                gasolina++;
                break;
            case 3:
                diesel++;
                break;
            case 4:
                printf("MUITO OBRIGADO\n");
                printf("Clientes que abasteceram Álcool: %d\n", alcool);
                printf("Clientes que abasteceram Gasolina: %d\n", gasolina);
                printf("Clientes que abasteceram Diesel: %d\n", diesel);
                return 0;  // Encerra o programa
            default:
                printf("Código inválido. Tente novamente.\n");
                break;
        }
    }

    return 0;
}


