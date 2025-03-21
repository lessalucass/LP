#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int v1, v2, resultado;
    
printf("Digite o valor 01: \n");
scanf("%d", &v1);
printf("Digite p valor 02: \n");
scanf("%d", &v2);

resultado = multiplicacao (v1, v2);
printf("O resultado é: %d \n", resultado);

printf("Digite o valor 01: \n");
scanf("%d", &v1);
printf("Digite p valor 02: \n");
scanf("%d", &v2);

resultado = multiplicacao (v1, v2);
printf("O resultado é: %d \n", resultado);
    return 0;
}

int multiplicacao (int n1, int n2){
    int resultado;
    resultado = n1*n2;
    return(resultado);
}