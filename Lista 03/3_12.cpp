#include <stdio.h>

main(){
	int num;
	printf("Digite um n�mero de 1 a 7: \n7");
	scanf("%d", &num);
	if(num==1){
		printf("Domingo");
	}else
	if(num==2){
		printf("Segunda-feira");
	}else
	if(num==3){
		printf("Ter�a-feira");
	}else
	if(num==4){
		printf("Quarta-feira");
	}else
	if(num==5){
		printf("Quinta-feira");
	}else
	if(num==6){
		printf("Sexta-feira");
	}else
	if(num==7){
		printf("S�bado");
	}
}
