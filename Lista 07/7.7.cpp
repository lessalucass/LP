/*7.7 Eust�gio resolveu fazer uma viagem para conhecer o nosso pa�s. Ele pretende visitar v�rias cidades, dividindo assim a
viagem em v�rios trechos. Entretanto, Eust�gio nega-se a passar por estradas cujo custo do ped�gio exceda um
determinado valor. Escreva um algoritmo para ler inicialmente o valor de ped�gio acima do qual Eust�gio nega-se a pagar.
A seguir ler v�rias duplas de valores representando respectivamente o custo do ped�gio e a dist�ncia (em Km) do trecho.
Calcular e escrever.
� Quantos trechos da viagem possuem um valor de ped�gio acima do qual Eust�gio nega-se a pagar.
� Quantos trechos foram informados.
� Quantos trechos acima de 150 Km de dist�ncia possuem um valor de ped�gio que Eust�gio concorda em pagar.
OBS: O algoritmo ser� encerrado ao ser fornecido um valor de ped�gio negativo. Neste caso a leitura da dist�ncia n�o
deve ser executada. Os resultados devem ser impressos no final do algoritmo.*/

#include <stdio.h>

int main() {
    float valorMaxPedagio;
    int trechosAcimaMaxPedagio = 0;
    int trechosInformados = 0;
    int trechosAcima150Km = 0;

    printf("Digite o valor m�ximo de ped�gio que Eust�gio est� disposto a pagar: ");
    scanf("%f", &valorMaxPedagio);

    float custoPedagio, distanciaKm;

    while (1) {
        printf("Digite o custo do ped�gio (-1 para encerrar): ");
        scanf("%f", &custoPedagio);

        if (custoPedagio < 0) {
            break;
        }

        printf("Digite a dist�ncia do trecho em Km: ");
        scanf("%f", &distanciaKm);

        trechosInformados++;

        if (custoPedagio > valorMaxPedagio) {
            trechosAcimaMaxPedagio++;
        }

        if (distanciaKm > 150 && custoPedagio <= valorMaxPedagio) {
            trechosAcima150Km++;
        }
    }

    printf("Quantidade de trechos com valor de ped�gio acima do limite: %d\n", trechosAcimaMaxPedagio);
    printf("Quantidade total de trechos informados: %d\n", trechosInformados);
    printf("Quantidade de trechos acima de 150 Km com ped�gio dentro do limite: %d\n", trechosAcima150Km);

    return 0;
}


