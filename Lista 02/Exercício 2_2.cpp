#include <stdio.h>
#include <math.h>

main(){
	float f, conversao;
	
	printf("Temperatura em graus Farenheit: ");
	scanf("%f", &f);
	
	conversao= (5*(-32))/9;
	
	printf("%f", conversao);
	return 0;
	
}