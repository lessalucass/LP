/*7.4) Escreva um algoritmo que verifique a validade de uma senha fornecida pelo usuário. A senha válida é o número 1234.
OBS: Se a senha informada pelo usuário for inválida, a mensagem "ACESSO NEGADO" deve ser impressa e repetida a
solicitação de uma nova senha até que ela seja válida. Caso contrário deve ser impressa a mensagem "ACESSO
PERMITIDO" junto com um número que representa quantas vezes a senha foi informada.*/

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
    printf("Número de tentativas: %d\n", tentativas);

    return 0;
}


