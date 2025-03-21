#include <stdio.h>

main(){
	int x, y;
	printf("Escreva a coordenada X: ");
	scanf("%d", &x);
	printf("Escreva a coordenada Y: ");
	scanf("%d", &y);
	
	if(x>0&&y>0){
		printf("I");
	}else
	if(x<0&&y>0){
		printf("II");
	}else
	if(x<0&&y<0){
		printf("III");
	}else
		printf("IV");
	}
	if(x==0&&y==0){
		printf("Nenhum quadrante.");
	}
