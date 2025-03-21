#include <stdio.h>

main(){
	float n1, n2, media;
	
	printf("Escreva a primeira nota: ");
	scanf("%f", &n1);
	printf("Escreva a segunda nota: ");
	scanf("%f", &n2);
	
	media= (n1+n2)/2;
	
	if(media>6.0){
		printf("PARABÉNS! Você foi aprovado!", media);
	}
	else{
		printf("Você foi REPROVADO! Estude mais.");
	}
}
