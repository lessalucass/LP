#include <stdio.h>
#include <math.h>
#include <locale.h>

main(){
	float kminicio, kmfinal, faturamento, litros, media, lucro;
	
	setlocale(LC_ALL, "Portuguese");
	printf("KM inicial: ");
	scanf("%f", &kminicio); 
	
	printf("KM final: ");
	scanf("%f", &kmfinal);
	
	printf("Quantos litros de combust�vel foram consumidos? ");
	scanf("%f", &litros);
	
	printf("Valor recebido dos passageiros? ");
	scanf("%f", &faturamento);
	
	media= (kmfinal - kminicio)/litros;
	
	lucro= faturamento - litros*2.50;
	
	printf("Seu consum m�dio foi de %f Km/L", media);
	printf("E o seu lucro do dia �: %f R$", lucro);
}


