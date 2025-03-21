/*5.10 O banco GASTADOR Ltda. deseja utilizar o computador para determinar o limite da conta especial de seus clientes
a partir do saldo da conta corrente e da poupan�a. Escreva um algoritmo para ler o saldo da conta corrente e da
poupan�a de um cliente e escrever o seguinte:
L�gica & Programa��o (L&P)
- A mensagem: �SEM CONTA ESPECIAL� se o cliente N�O possuir o requisito necess�rio para a conta especial (REQUISITO
PARA POSSUIR CONTA ESPECIAL: o saldo em pelo menos uma das duas contas deve estar acima de R$1000,00).
- O valor do limite da conta conforme especifica��o abaixo:
* O valor limite da conta especial fornecido ao cliente deve ser o dobro do maior saldo (entre conta corrente e
poupan�a) ou o tripo do menor saldo. Deve ser fornecido o valor de limite maior entre essas 2 situa��es.
OBS: Considere que os saldos da conta corrente e poupan�a n�o s�o iguais.*/

#include <stdio.h>

int main() {
    // Declara��o das vari�veis para os saldos da conta corrente e poupan�a
    float saldo_corrente, saldo_poupanca;

    // Solicita os saldos da conta corrente e da poupan�a ao usu�rio
    printf("Informe o saldo da conta corrente: R$ ");
    scanf("%f", &saldo_corrente);
    
    printf("Informe o saldo da poupan�a: R$ ");
    scanf("%f", &saldo_poupanca);

    // Verifica se pelo menos uma das contas possui saldo superior a R$ 1000
    if (saldo_corrente > 1000.0 || saldo_poupanca > 1000.0) {
        // Calcula o limite da conta especial como o dobro do maior saldo
        float limite_conta_especial = (saldo_corrente > saldo_poupanca) ? saldo_corrente * 2 : saldo_poupanca * 2;
        printf("Limite da conta especial: R$ %.2f\n", limite_conta_especial);
    } else {
        printf("SEM CONTA ESPECIAL\n");
    }

    return 0;
}


