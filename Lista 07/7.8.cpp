/*7.8 A Federação Pelotense de Futebol necessita um software para fazer uma estatística sobre os torcedores dos clubes
pelotenses. Escreva um algoritmo para ler uma quantidade indeterminada de duplas de valores representando o código
do time (1.Brasil 2.Pelotas 3.Farroupilha) e a idade do torcedor. O algoritmo termina ao ser fornecido um código inválido
(nesta situação a idade não deve ser lida). Calcular e escrever o percentual de torcedores de cada time em relação ao
total, e a quantidade de torcedores do Brasil com idade entre 15 (inclusive) e 20 (inclusive) anos.*/

#include <stdio.h>

int main() {
    int codigoTime;
    int idade;
    int totalTorcedores = 0;
    int torcedoresBrasilEntre15e20 = 0;
    int torcedoresBrasil = 0;
    int torcedoresPelotas = 0;
    int torcedoresFarroupilha = 0;

    printf("Informe o código do time (1.Brasil 2.Pelotas 3.Farroupilha) e a idade do torcedor:\n");

    while (1) {
        printf("Digite o código do time (ou um código inválido para encerrar): ");
        scanf("%d", &codigoTime);

        if (codigoTime < 1 || codigoTime > 3) {
            break;
        }

        printf("Digite a idade do torcedor: ");
        scanf("%d", &idade);

        totalTorcedores++;

        if (codigoTime == 1) {
            torcedoresBrasil++;

            if (idade >= 15 && idade <= 20) {
                torcedoresBrasilEntre15e20++;
            }
        } else if (codigoTime == 2) {
            torcedoresPelotas++;
        } else if (codigoTime == 3) {
            torcedoresFarroupilha++;
        }
    }

    if (totalTorcedores > 0) {
        float percentualBrasil = (float)torcedoresBrasil * 100 / totalTorcedores;
        float percentualPelotas = (float)torcedoresPelotas * 100 / totalTorcedores;
        float percentualFarroupilha = (float)torcedoresFarroupilha * 100 / totalTorcedores;

        printf("Percentual de torcedores do Brasil: %.1f%%\n", percentualBrasil);
        printf("Percentual de torcedores do Pelotas: %.1f%%\n", percentualPelotas);
        printf("Percentual de torcedores do Farroupilha: %.1f%%\n", percentualFarroupilha);

        printf("Quantidade de torcedores do Brasil entre 15 e 20 anos: %d\n", torcedoresBrasilEntre15e20);
    } else {
        printf("Nenhum torcedor informado.\n");
    }

    return 0;
}

