/*11.17 Um enduro é uma prova disputada com motos onde o competidor tem que percorrer um trajeto em um tempo
determinado pela organização da prova. Normalmente, o trajeto é dividido em vários trechos onde estão localizados
postos de cronometragem para anotar o tempo de cada competidor. Neste ano, será realizado o enduro da Informática,
uma prova disputada em várias etapas durante o ano. Você foi convidado a escrever um algoritmo para obter alguns
dados estatísticos sobre a prova. O algoritmo deve ler inicialmente a quantidade de etapas do Enduro. A seguir deve ler,
para cada etapa, a respectiva quantidade de trechos em que seu percurso é dividido. Depois o algoritmo deve ler a
distância (em Km) de cada trecho da etapa e o tempo em (minutos) que ele deve ser percorrido. O algoritmo deve escrever
conforme o exemplo abaixo:
O tempo total do percurso de cada etapa, quantos trechos considerando todas as etapas possuem menos de 50 Km, a
distância total do percurso da etapa mais curta.*/

#include <stdio.h>

int main() {
    int numEtapas;
    printf("Digite a quantidade de etapas do Enduro: ");
    scanf("%d", &numEtapas);

    int trechosMenosDe50Km = 0;
    float menorDistanciaEtapa = -1;
    int tempoTotalPorEtapa[numEtapas];

    for (int i = 0; i < numEtapas; i++) {
        int numTrechos;
        printf("Digite a quantidade de trechos da etapa %d: ", i + 1);
        scanf("%d", &numTrechos);

        int tempoTotalEtapa = 0;
        float distanciaEtapa = 0;

        for (int j = 0; j < numTrechos; j++) {
            float distancia, tempo;
            printf("Digite a distância (Km) e o tempo (minutos) do trecho %d da etapa %d: ", j + 1, i + 1);
            scanf("%f %f", &distancia, &tempo);

            tempoTotalEtapa += tempo;
            distanciaEtapa += distancia;

            if (distancia < 50) {
                trechosMenosDe50Km++;
            }
        }

        if (menorDistanciaEtapa == -1 || distanciaEtapa < menorDistanciaEtapa) {
            menorDistanciaEtapa = distanciaEtapa;
        }

        tempoTotalPorEtapa[i] = tempoTotalEtapa;

        printf("Tempo total da etapa %d: %d minutos\n", i + 1, tempoTotalEtapa);
    }

    printf("Quantidade de trechos com menos de 50 Km em todas as etapas: %d\n", trechosMenosDe50Km);
    printf("Distância total da etapa mais curta: %.2f Km\n", menorDistanciaEtapa);

    return 0;
}


