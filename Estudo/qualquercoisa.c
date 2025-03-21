#include <stdio.h>

main(){
    int m[3][3], i, j;

    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            printf("Digite os valores da matriz: ");
            scanf("%d", &m[i][j]);
        }
    }

    for(i=2; i>0; i--){
        for(j=2; j>0; j--){
            printf("%d ", m[i][j]);        
            }
        printf("\n");
    }
}