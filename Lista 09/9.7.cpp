/*9.7 Suponha que exista um pr�dio de 20 andares com tr�s elevadores, identificados pelos n�meros 1, 2 e 3. Para otimizar
o sistema de controle dos elevadores, foi realizado um levantamento no qual cada usu�rio respondia qual o elevador que
utilizava com mais frequ�ncia. Escreva um algoritmo para ler as respostas (c�digos 1, 2 ou 3) de v�rios usu�rios do pr�dio
calcule e imprima o identificador do elevador mais frequentado. O algoritmo termina ao ser informado um identificador
inv�lido para o elevador.*/

#include <stdio.h>

int main() {
    int respostas[3] = {0}; // Inicializa um array para contar as respostas dos elevadores
    int identificador;

    printf("Responda qual elevador voc� utiliza com mais frequ�ncia (1, 2 ou 3).\n");
    printf("Para encerrar, digite um identificador inv�lido.\n");

    while (1) {
        printf("Identificador do elevador: ");
        scanf("%d", &identificador);

        // Verificar se o identificador � v�lido (1, 2 ou 3)
        if (identificador < 1 || identificador > 3) {
            break; // Encerrar o loop quando for fornecido um identificador inv�lido
        }

        // Incrementar o contador de respostas para o identificador do elevador
        respostas[identificador - 1]++;
    }

    // Determinar qual elevador � o mais frequentado
    int elevadorMaisFrequentado = 1;
    int maxRespostas = respostas[0];

    for (int i = 1; i < 3; i++) {
        if (respostas[i] > maxRespostas) {
            elevadorMaisFrequentado = i + 1;
            maxRespostas = respostas[i];
        }
    }

    // Imprimir o identificador do elevador mais frequentado
    printf("O elevador mais frequentado � o de identificador %d, com %d respostas.\n", elevadorMaisFrequentado, maxRespostas);

    return 0;
}

