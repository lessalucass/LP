#include <stdio.h>

main(){
	float n1, n2, conta, resp;
	
	do{
	printf("Digite o dividendo: ");
	scanf("%f", &n1);
	
	do{
	printf("Digite o divisor: ");
	scanf("%f", &n2);
	if(n2==0){
		printf("Valor inv�lido\n");
	}
	}while(n2==0);
	
	conta=n1/n2;
	printf("Resultado= %.2f\n", conta);
	
	printf("Novo c�lculo? \n1.Sim\n2.N�o\n");
	scanf("%f", &resp);
	}while(resp==1);
}
