/*A Federa��o Ga�cha de Futebol contratou voc� para escrever um programa para fazer uma estat�stica do resultado
de v�rios GRENAIS. Escreva um algoritmo para ler a quantidade de gols marcados pelo Internacional, a quantidade de
gols marcados pelo Gr�mio em um GRENAL, imprimindo o nome do time vitorioso ou a palavra EMPATE. Logo ap�s
escrever a mensagem "Novo GRENAL 1.Sim 2.N�o?" e solicitar uma resposta. Se a resposta for 1, o algoritmo deve ser
executado novamente solicitando o n�mero de gols marcados pelos times em uma nova partida, caso contr�rio deve ser
encerrado imprimindo:
� Quantos GRENAIS fizeram parte da estat�stica.
� A quantidade de vit�rias do Internacional.
� A quantidade de vit�rias do Gr�mio.
� A quantidade de Empates.
� Uma mensagem indicando qual o time que venceu o maior n�mero de GRENAIS (ou N�O HOUVE VENCEDOR).*/

#include <stdio.h>

int main() {
    int golsInter, golsGremio;
    int grenais = 0, vitoriasInter = 0, vitoriasGremio = 0, empates = 0;
    int resposta;

    do {
        printf("Digite a quantidade de gols do Internacional: ");
        scanf("%d", &golsInter);

        printf("Digite a quantidade de gols do Gr�mio: ");
        scanf("%d", &golsGremio);

        grenais++;

        if (golsInter > golsGremio) {
            vitoriasInter++;
            printf("Inter venceu o GRENAL\n");
        } else if (golsGremio > golsInter) {
            vitoriasGremio++;
            printf("Gr�mio venceu o GRENAL\n");
        } else {
            empates++;
            printf("O GRENAL terminou em empate\n");
        }

        printf("Novo GRENAL? 1.Sim 2.N�o: ");
        scanf("%d", &resposta);

    } while (resposta == 1);

    printf("Quantidade de GRENAIS: %d\n", grenais);
    printf("Vit�rias do Internacional: %d\n", vitoriasInter);
    printf("Vit�rias do Gr�mio: %d\n", vitoriasGremio);
    printf("Empates: %d\n", empates);

    if (vitoriasInter > vitoriasGremio) {
        printf("O Internacional venceu o maior n�mero de GRENAIS\n");
    } else if (vitoriasGremio > vitoriasInter) {
        printf("O Gr�mio venceu o maior n�mero de GRENAIS\n");
    } else {
        printf("N�O HOUVE VENCEDOR em n�mero de GRENAIS\n");
    }

    return 0;
}

