/*7.6 Um Posto de combust�veis deseja determinar qual de seus produtos tem a prefer�ncia de seus clientes. Escreva um
algoritmo para ler o tipo de combust�vel abastecido (codificado da seguinte forma: 1.�lcool 2.Gasolina 3.Diesel 4.Fim).
Caso o usu�rio informe um c�digo inv�lido (fora da faixa de 1 a 4) deve ser solicitado um novo c�digo (at� que seja v�lido).
Ao ser informado o c�digo do combust�vel, o seu respectivo nome deve ser impresso na tela. O programa ser� encerrado
quando o c�digo informado for o n�mero 4 escrevendo ent�o a mensagem: "MUITO OBRIGADO" e a quantidade de
clientes que abasteceram cada tipo de combust�vel.*/

#include <stdio.h>

int main() {
    int codigo, alcool = 0, gasolina = 0, diesel = 0;

    printf("Informe o tipo de combust�vel abastecido:\n");
    printf("1. �lcool\n");
    printf("2. Gasolina\n");
    printf("3. Diesel\n");
    printf("4. Fim\n");

    while (1) {
        printf("Digite o c�digo (1 a 4): ");
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
                printf("Clientes que abasteceram �lcool: %d\n", alcool);
                printf("Clientes que abasteceram Gasolina: %d\n", gasolina);
                printf("Clientes que abasteceram Diesel: %d\n", diesel);
                return 0;  // Encerra o programa
            default:
                printf("C�digo inv�lido. Tente novamente.\n");
                break;
        }
    }

    return 0;
}


