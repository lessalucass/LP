/*7.4) Escreva um algoritmo que verifique a validade de uma senha fornecida pelo usu�rio. A senha v�lida � o n�mero 1234.
OBS: Se a senha informada pelo usu�rio for inv�lida, a mensagem "ACESSO NEGADO" deve ser impressa e repetida a
solicita��o de uma nova senha at� que ela seja v�lida. Caso contr�rio deve ser impressa a mensagem "ACESSO
PERMITIDO" junto com um n�mero que representa quantas vezes a senha foi informada.*/

#include <stdio.h>

int main() {
    int senhaCorreta = 1234;
    int senha;
    int tentativas = 0;

    do {
        printf("Digite a senha: ");
        scanf("%d", &senha);

        tentativas++;

        if (senha != senhaCorreta) {
            printf("ACESSO NEGADO\n");
        }

    } while (senha != senhaCorreta);

    printf("ACESSO PERMITIDO\n");
    printf("N�mero de tentativas: %d\n", tentativas);

    return 0;
}


