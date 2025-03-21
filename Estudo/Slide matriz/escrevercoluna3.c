#include <stdio.h>

main(){
    int m[3][4], i, j;

    for(i=0; i<=2; i++){
        for(j=0; j<=3; j++){
            printf("Digite o elemento %d, %d : ", i, j);
            scanf("%d", &m[i][j]);
        }
    }
    for(i=0; i<=2; i++){
        printf("%d", m[i][3]);
    }

}