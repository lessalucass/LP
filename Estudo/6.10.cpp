#include <stdio.h>

main(){
	float n1,n2, media, resp;
	
	do{	
	do{
	printf("Digite a primeira nota: ");
	scanf("%f", &n1);
	
	if(n1<0 || n1>10){
		printf("Nota inválida\n");
	}
	}while(n1<0 || n1>10);
	
	do{
	printf("Digite a segunda nota: ");
	scanf("%f", &n2);
	
	if(n2<0 || n2>10){
		printf("Nota Inválida\n");
	}
	}while(n2<0 || n2>10);
	
	media=(n1+n2)/2;
	printf("A média é: %f", media);
	
	do{
	printf("\nNovo cálculo? (1.Sim 2.Não)");
	scanf("%f", &resp);
	}while(resp!=1 && resp!=2);
	
	}while(resp==1);
}
	
