/*7.7 Eustógio resolveu fazer uma viagem para conhecer o nosso país. Ele pretende visitar várias cidades, dividindo assim a
viagem em vários trechos. Entretanto, Eustógio nega-se a passar por estradas cujo custo do pedágio exceda um
determinado valor. Escreva um algoritmo para ler inicialmente o valor de pedágio acima do qual Eustógio nega-se a pagar.
A seguir ler várias duplas de valores representando respectivamente o custo do pedágio e a distância (em Km) do trecho.
Calcular e escrever.
• Quantos trechos da viagem possuem um valor de pedágio acima do qual Eustógio nega-se a pagar.
• Quantos trechos foram informados.
• Quantos trechos acima de 150 Km de distância possuem um valor de pedágio que Eustógio concorda em pagar.
OBS: O algoritmo será encerrado ao ser fornecido um valor de pedágio negativo. Neste caso a leitura da distância não
deve ser executada. Os resultados devem ser impressos no final do algoritmo.*/

#include <stdio.h>

int main() {
    float valorMaxPedagio;
    int trechosAcimaMaxPedagio = 0;
    int trechosInformados = 0;
    int trechosAcima150Km = 0;

    printf("Digite o valor máximo de pedágio que Eustógio está disposto a pagar: ");
    scanf("%f", &valorMaxPedagio);

    float custoPedagio, distanciaKm;

    while (1) {
        printf("Digite o custo do pedágio (-1 para encerrar): ");
        scanf("%f", &custoPedagio);

        if (custoPedagio < 0) {
            break;
        }

        printf("Digite a distância do trecho em Km: ");
        scanf("%f", &distanciaKm);

        trechosInformados++;

        if (custoPedagio > valorMaxPedagio) {
            trechosAcimaMaxPedagio++;
        }

        if (distanciaKm > 150 && custoPedagio <= valorMaxPedagio) {
            trechosAcima150Km++;
        }
    }

    printf("Quantidade de trechos com valor de pedágio acima do limite: %d\n", trechosAcimaMaxPedagio);
    printf("Quantidade total de trechos informados: %d\n", trechosInformados);
    printf("Quantidade de trechos acima de 150 Km com pedágio dentro do limite: %d\n", trechosAcima150Km);

    return 0;
}


