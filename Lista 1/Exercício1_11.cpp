#include <stdio.h>
#include <math.h>

main(){
	float comp, numvoltas, reabast, cons, totalpercurso, distreab, nlitros;
	
	printf("Comprimento da pista? ");
	scanf("%f", &comp);
	
	printf("N�mero total de voltas a serem percorridas: ");
	scanf("%f", &numvoltas);
	
	printf("N�mero de reabastecimentos desejados: ");
	scanf("%f", &reabast);
	
	printf("Consumo de combust�vel do carro: ");
	scanf("%f", &cons);
	
	totalpercurso= comp/1000*numvoltas;
	distreab= totalpercurso/(reabast+1);
	nlitros= distreab/cons;
	
	printf("n�mero m�nimo de litros: %f ", nlitros);
}
