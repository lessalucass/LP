#include <stdio.h>
#include <math.h>

main(){
	float comp, numvoltas, reabast, cons, totalpercurso, distreab, nlitros;
	
	printf("Comprimento da pista? ");
	scanf("%f", &comp);
	
	printf("Número total de voltas a serem percorridas: ");
	scanf("%f", &numvoltas);
	
	printf("Número de reabastecimentos desejados: ");
	scanf("%f", &reabast);
	
	printf("Consumo de combustível do carro: ");
	scanf("%f", &cons);
	
	totalpercurso= comp/1000*numvoltas;
	distreab= totalpercurso/(reabast+1);
	nlitros= distreab/cons;
	
	printf("número mínimo de litros: %f ", nlitros);
}
