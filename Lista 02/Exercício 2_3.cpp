#include <stdio.h>

main(){
	float salariom, reajuste, percentual;
	
	printf("Escreva o salário mensal: ");
	scanf("%f", &salariom);
	printf("escreva o percentual de reajuste: ");
	scanf("%f", &percentual);
	reajuste= salariom*((percentual/100) +1);
	printf("O novo salário será de %f", reajuste);
}
