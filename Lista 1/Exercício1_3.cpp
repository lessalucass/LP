#include <stdio.h>
#include <math.h>

main(){
	float salarioM, reajuste, conta, salarioN;
	
	printf("Qual o salário mensal do funcionário?");
	scanf("%f", &salarioM);
	
	printf("Qual é o percentual de reajuste?");
	scanf("%f", &reajuste);
	
	conta= (salarioM*reajuste)/100;
	
	salarioN= conta+salarioM;
	
	printf("O salário novo será: %f /n", salarioN);
	
}
