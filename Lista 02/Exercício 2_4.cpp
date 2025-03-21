#include <stdio.h>

main(){
	float precov, promo, calculo;
	
	printf("Digite o preço de venda: ");
	scanf("%f", &precov);
	
	promo=precov/0.18;
	
	printf("O preço promocional será de: %f", promo);
	
}
