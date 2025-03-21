#include <stdio.h>
#include <math.h>

main(){
	float comprimento, largura, altura, dimensao, caixas;
	
	printf("Qual o comprimento da cozinha? ");
	scanf("%f", &comprimento);
	
	printf("Qual a largura? ");
	scanf("%f", &largura);
	
	printf("E qual a altura? ");
	scanf("%f", &altura);
	
	dimensao= (comprimento*altura*2) + (largura*altura*2);
	
	caixas= (dimensao/1.5);
	
	printf("A quantidade necessária de azulejos será de: %f", caixas);
	
}
