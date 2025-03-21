#include <stdio.h>
#include <math.h>

main(){
	float quantempregados, salariom, precobici, bicivendidas, salindividual, precovenda, lucroliq;
	
	printf("Número de empregados da loja: ");
	scanf("%f", &quantempregados);
	
	printf("Valor do salário mínimo: ");
	scanf("%f", &salariom);
	
	printf("Qual o preço de cada bicicleta: ");
	scanf("%f", &precobici);
	
	printf("Quantas bicicletas foram vendidas: ");
	scanf("%f", &bicivendidas);
	
	salindividual= 2*salariom + (0.15*precobici*bicivendidas)/quantempregados;
	precovenda= precobici*1.5;
	lucroliq= bicivendidas*(precovenda-precobici) - salindividual*quantempregados;
	
	printf("O salário dinal de cada empregado é de: %f ", salindividual);
	printf("O lucro líquido da loja é de: %f ",lucroliq);
	
}
