#include <stdio.h>

main(){
	float v1, v2, opera, adicao, subtracao, divisao, multiplicacao;
	
	printf("Digite o primeiro valor: ");
	scanf("%f", &v1);
	
	printf("Digite o segundo valor: ");
	scanf("%f", &v2);
	
	printf("Digite qual a operação: \n1.Adição\n2.Subtração\n3.Divisão\n4.Multiplicação\n");
	scanf("%f", &opera);
	
	if(opera==1){
		adicao=v1+v2;
		printf("Resultado da soma: %f", adicao);
	}
	if(opera==2){
		subtracao=v1-v2;
		printf("Resultado da subtração: %f", subtracao);
	}
	if(opera==3){
		divisao=v1/v2;
		printf("Resultado da divisão: %f", divisao);
	}
	if(opera==4){
		multiplicacao=v1*v2;
		printf("Resultado da Multiplicação: %f", multiplicacao);
	}
	
	
	
}
