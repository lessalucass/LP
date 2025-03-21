/*8.17 Ler 10 valores e contar quantos estão no intervalo [100,200] e quantos deles estão fora deste intervalo. Escrever o
resultado das duas contagens.*/

#include <stdio.h>

int main() {
    int valores[10];
    int dentroIntervalo = 0;
    int foraIntervalo = 0;

    // Ler os 10 valores
    for (int i = 0; i < 10; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &valores[i]);

        if (valores[i] >= 100 && valores[i] <= 200) {
            dentroIntervalo++;
        } else {
            foraIntervalo++;
        }
    }

    // Imprimir os resultados
    printf("Valores dentro do intervalo [100, 200]: %d\n", dentroIntervalo);
    printf("Valores fora do intervalo [100, 200]: %d\n", foraIntervalo);

    return 0;
}

