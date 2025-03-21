/* Somar linha 4 de M

#include <Stdio.h>

int m[5][5], i,j, soma;

main(){
    for(i=0; i<5; i++){
        for(j=0; j<5; j++){
        printf("Digite o valor %d, %d, da matriz:",i,j);
        scanf("%d", &m[i][j]);
        }
    }
    for(j=0; j<5; j++){
         soma += m[3][j];
    }
     printf("A soma é: %d \n", soma);
}
*/

/*Somar coluna 2 de M
#include <stdio.h>
int m[5][5], i, j, soma;
soma=0;
main(){

    for(i=0; i<5; i++){
        for(j=0; j<5; j++){
            printf("Digite os elementos %d, %d da matriz:", i,j);
            scanf("%d", &m[i][j]);
        }
    }
    for(i=0; i<5; i++){
        soma += m[i][1];
    }
     printf("A soma é: %d", soma);
}
*/
/*Somar a diagonal pincipal
#include <stdio.h>

int main() {
    int matriz[5][5];
    int i, j, somaDiagonal = 0;

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            printf("Digite o elemento [%d][%d] da matriz: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    for (i = 0; i < 5; i++) {
        somaDiagonal += matriz[i][i];
    }

    printf("A soma dos elementos da diagonal principal é: %d\n", somaDiagonal);
    return 0;
}
*/
/*Somar diagonal Secundária
#include <stdio.h>

int main() {
    int matriz[5][5];
    int i, j, somaDiagonalSecundaria = 0;

    // Preenchendo a matriz
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            printf("Digite o elemento [%d][%d] da matriz: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    for (i = 0; i < 5; i++) {
        somaDiagonalSecundaria += matriz[i][4 - i];
    }

    printf("A soma dos elementos da diagonal secundária é: %d\n", somaDiagonalSecundaria);

    return 0;
}*/
/*Soma da matriz toda
#include <stdio.h>

int main() {
    int matriz[5][5];
    int i, j, somaDiagonalSecundaria = 0;

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            printf("Digite o elemento [%d][%d] da matriz: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    for (i = 0; i < 5; i++) {
        somaDiagonalSecundaria += matriz[i][4 - i];
    }

    printf("A soma dos elementos da diagonal secundária é: %d\n", somaDiagonalSecundaria);

    return 0;
}
*/