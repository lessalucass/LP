#include <stdio.h>
#include <math.h>

main(){
	float quantempregados, salariom, precobici, bicivendidas, salindividual, precovenda, lucroliq;
	
	printf("N�mero de empregados da loja: ");
	scanf("%f", &quantempregados);
	
	printf("Valor do sal�rio m�nimo: ");
	scanf("%f", &salariom);
	
	printf("Qual o pre�o de cada bicicleta: ");
	scanf("%f", &precobici);
	
	printf("Quantas bicicletas foram vendidas: ");
	scanf("%f", &bicivendidas);
	
	salindividual= 2*salariom + (0.15*precobici*bicivendidas)/quantempregados;
	precovenda= precobici*1.5;
	lucroliq= bicivendidas*(precovenda-precobici) - salindividual*quantempregados;
	
	printf("O sal�rio dinal de cada empregado � de: %f ", salindividual);
	printf("O lucro l�quido da loja � de: %f ",lucroliq);
	
}
