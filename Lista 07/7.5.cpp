/*A Federação Gaúcha de Futebol contratou você para escrever um programa para fazer uma estatística do resultado
de vários GRENAIS. Escreva um algoritmo para ler a quantidade de gols marcados pelo Internacional, a quantidade de
gols marcados pelo Grêmio em um GRENAL, imprimindo o nome do time vitorioso ou a palavra EMPATE. Logo após
escrever a mensagem "Novo GRENAL 1.Sim 2.Não?" e solicitar uma resposta. Se a resposta for 1, o algoritmo deve ser
executado novamente solicitando o número de gols marcados pelos times em uma nova partida, caso contrário deve ser
encerrado imprimindo:
• Quantos GRENAIS fizeram parte da estatística.
• A quantidade de vitórias do Internacional.
• A quantidade de vitórias do Grêmio.
• A quantidade de Empates.
• Uma mensagem indicando qual o time que venceu o maior número de GRENAIS (ou NÃO HOUVE VENCEDOR).*/

#include <stdio.h>

int main() {
    int golsInter, golsGremio;
    int grenais = 0, vitoriasInter = 0, vitoriasGremio = 0, empates = 0;
    int resposta;

    do {
        printf("Digite a quantidade de gols do Internacional: ");
        scanf("%d", &golsInter);

        printf("Digite a quantidade de gols do Grêmio: ");
        scanf("%d", &golsGremio);

        grenais++;

        if (golsInter > golsGremio) {
            vitoriasInter++;
            printf("Inter venceu o GRENAL\n");
        } else if (golsGremio > golsInter) {
            vitoriasGremio++;
            printf("Grêmio venceu o GRENAL\n");
        } else {
            empates++;
            printf("O GRENAL terminou em empate\n");
        }

        printf("Novo GRENAL? 1.Sim 2.Não: ");
        scanf("%d", &resposta);

    } while (resposta == 1);

    printf("Quantidade de GRENAIS: %d\n", grenais);
    printf("Vitórias do Internacional: %d\n", vitoriasInter);
    printf("Vitórias do Grêmio: %d\n", vitoriasGremio);
    printf("Empates: %d\n", empates);

    if (vitoriasInter > vitoriasGremio) {
        printf("O Internacional venceu o maior número de GRENAIS\n");
    } else if (vitoriasGremio > vitoriasInter) {
        printf("O Grêmio venceu o maior número de GRENAIS\n");
    } else {
        printf("NÃO HOUVE VENCEDOR em número de GRENAIS\n");
    }

    return 0;
}

