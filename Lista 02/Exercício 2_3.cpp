#include <stdio.h>

main(){
	float salariom, reajuste, percentual;
	
	printf("Escreva o sal�rio mensal: ");
	scanf("%f", &salariom);
	printf("escreva o percentual de reajuste: ");
	scanf("%f", &percentual);
	reajuste= salariom*((percentual/100) +1);
	printf("O novo sal�rio ser� de %f", reajuste);
}
