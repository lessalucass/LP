#include <stdio.h>

main(){
	float n1, n2, media, ap, resp;
	ap=0;
	
	do{
	printf("Digite a primeira nota: ");
	scanf("%f", &n1);
	
	printf("Digite a segunda nota: ");
	scanf("%f", &n2);
	
	media=(n1+n2)/2;
	printf("A m�dia �: %.1f", media);
	
	if(media>=6){
		ap++;
	}
	
	printf("\nCalcular a m�dia de outro aluno? (1.Sim 2.N�o)");
	scanf("%f", &resp);
	}while(resp==1);
	printf("Alunos aprovados: %.1f", ap);
	
}
