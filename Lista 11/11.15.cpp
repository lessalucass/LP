/*11.15 Escreva um algoritmo para ler várias de notas. O algoritmo deverá ser encerrado ao ser fornecida uma nota inválida.
Calcular e escrever a menor e a maior nota entre as notas lidas.*/

#include <stdio.h>
#include <stdbool.h>

int main() {
    float nota;
    float menorNota = 10.0; // Inicializa a menorNota com um valor alto
    float maiorNota = -1.0; // Inicializa a maiorNota com um valor baixo
    bool primeiraNota = true;

    printf("Digite as notas (para encerrar, digite uma nota inválida):\n");

    while (true) {
        printf("Digite uma nota: ");
        scanf("%f", &nota);

        // Verifica se a nota é inválida (por exemplo, negativa)
        if (nota < 0 || nota > 10) {
            break; // Sai do loop ao fornecer uma nota inválida
        }

        // Atualiza a menor e a maior nota
        if (primeiraNota) {
            menorNota = nota;
            maiorNota = nota;
            primeiraNota = false;
        } else {
            if (nota < menorNota) {
                menorNota = nota;
            }
            if (nota > maiorNota) {
                maiorNota = nota;
            }
        }
    }

    if (primeiraNota) {
        printf("Nenhuma nota válida foi inserida.\n");
    } else {
        printf("Menor nota: %.2f\n", menorNota);
        printf("Maior nota: %.2f\n", maiorNota);
    }

    return 0;
}


