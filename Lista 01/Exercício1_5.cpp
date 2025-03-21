#include <stdio.h>
#include <math.h>

main(){
	float cels, conversao;
	
	printf("Qual a temperatura em Celsius?");
	scanf("%f", &cels);
	
	conversao = cels*1.8+32;
	
	printf("A temperatura em Farenheit será: %f C", conversao);
}
