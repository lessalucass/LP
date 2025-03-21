#include <stdio.h>
#include <math.h>
main(){
	float htrab, vhora, filho, salario, acrescimo, salariofinal;
	
	printf("Qual a quantidade de horas trabalhadas?");
	scanf("%f", &htrab);
	
	printf("Quanto ele recebe por hora?");
	scanf("%f", &vhora);
	
	salario= htrab*vhora;
	
	printf("Quantos filhos com idade menor de 14 anos ele possui?");
	scanf("%f", &filho);
	
	acrescimo= 0.02 * salario;
	salariofinal= salario + (filho * acrescimo);
	
	printf("O salário final dele será de: %f /n", salariofinal);

	
}
