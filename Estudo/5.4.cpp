#include <stdio.h>

main(){
	float gasolina, alcool, litros, tipo, preco, total;
	
	printf("Quantos litros foram vendidos: ");
	scanf("%f", &litros);
	
	printf("Qual o tipo de combustivel:\n 1-�lcool\n2-Gasolina ");
	scanf("%f", &tipo);
	
	printf("Qual o pre�o do combust�vel: ");
	scanf("%f", &preco);
	
	if(tipo==1){
		if(preco<=20){
			total=(litros*preco)*(1-0.03);
			if(preco>20){
				total=(litros*preco)*(1-0.05);
			}
		}
	}
	if(tipo==2){
		if(preco<=15){
			total=(litros*preco)*(1-0.035);
			if(preco>20){
				total=(litros*preco)*(1-0.06);
			}
		}
	}
	if(tipo!=1 && tipo!=2){
		printf("c�digo inv�lido");
	}
	printf("O total pago ser�: %f", total);
}
