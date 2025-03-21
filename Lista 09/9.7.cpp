/*9.7 Suponha que exista um prédio de 20 andares com três elevadores, identificados pelos números 1, 2 e 3. Para otimizar
o sistema de controle dos elevadores, foi realizado um levantamento no qual cada usuário respondia qual o elevador que
utilizava com mais frequência. Escreva um algoritmo para ler as respostas (códigos 1, 2 ou 3) de vários usuários do prédio
calcule e imprima o identificador do elevador mais frequentado. O algoritmo termina ao ser informado um identificador
inválido para o elevador.*/

#include <stdio.h>

int main() {
    int respostas[3] = {0}; // Inicializa um array para contar as respostas dos elevadores
    int identificador;

    printf("Responda qual elevador você utiliza com mais frequência (1, 2 ou 3).\n");
    printf("Para encerrar, digite um identificador inválido.\n");

    while (1) {
        printf("Identificador do elevador: ");
        scanf("%d", &identificador);

        // Verificar se o identificador é válido (1, 2 ou 3)
        if (identificador < 1 || identificador > 3) {
            break; // Encerrar o loop quando for fornecido um identificador inválido
        }

        // Incrementar o contador de respostas para o identificador do elevador
        respostas[identificador - 1]++;
    }

    // Determinar qual elevador é o mais frequentado
    int elevadorMaisFrequentado = 1;
    int maxRespostas = respostas[0];

    for (int i = 1; i < 3; i++) {
        if (respostas[i] > maxRespostas) {
            elevadorMaisFrequentado = i + 1;
            maxRespostas = respostas[i];
        }
    }

    // Imprimir o identificador do elevador mais frequentado
    printf("O elevador mais frequentado é o de identificador %d, com %d respostas.\n", elevadorMaisFrequentado, maxRespostas);

    return 0;
}

