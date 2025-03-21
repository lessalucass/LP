#include <stdio.h>
#include <math.h>
#include <onio.h>

main(){
	float n1, n2, media;
	
	printf("Escreva a nota da primeira avaliação: ");
	scanf("%f", &n1);
	
	printf("Escreva a nota da segunda avaliação: ");
	scanf("%f", &n2);
	
	media= (n1+n2)/2;
	
	printf("A nota final �: %f", media);
	
	if(media > 6.0 ){
	printf("Aprovado!");	
	}
	if(media > 3.0){
		printf("Em exame!");
	}
	if(media < 3.0 ){
		printf("Reprovado!");
	}
	
	
}
