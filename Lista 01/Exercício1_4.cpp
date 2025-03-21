#include <stdio.h>
#include <math.h>

main(){
	float faren, conversao;
	
	printf("Qual a temperatura em Farenheit?");
	scanf("%f", &faren);
	
	conversao = (faren-32)/1.8;
	
	printf("A temperatura em Celsius será: %f C", conversao);
}
