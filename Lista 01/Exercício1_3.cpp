#include <stdio.h>
#include <math.h>

main(){
	float salarioM, reajuste, conta, salarioN;
	
	printf("Qual o sal�rio mensal do funcion�rio?");
	scanf("%f", &salarioM);
	
	printf("Qual � o percentual de reajuste?");
	scanf("%f", &reajuste);
	
	conta= (salarioM*reajuste)/100;
	
	salarioN= conta+salarioM;
	
	printf("O sal�rio novo ser�: %f /n", salarioN);
	
}
