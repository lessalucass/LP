#include <stdio.h>

main(){
	float v1, v2, opera, adicao, subtracao, divisao, multiplicacao;
	
	printf("Digite o primeiro valor: ");
	scanf("%f", &v1);
	
	printf("Digite o segundo valor: ");
	scanf("%f", &v2);
	
	printf("Digite qual a opera��o: \n1.Adi��o\n2.Subtra��o\n3.Divis�o\n4.Multiplica��o\n");
	scanf("%f", &opera);
	
	if(opera==1){
		adicao=v1+v2;
		printf("Resultado da soma: %f", adicao);
	}
	if(opera==2){
		subtracao=v1-v2;
		printf("Resultado da subtra��o: %f", subtracao);
	}
	if(opera==3){
		divisao=v1/v2;
		printf("Resultado da divis�o: %f", divisao);
	}
	if(opera==4){
		multiplicacao=v1*v2;
		printf("Resultado da Multiplica��o: %f", multiplicacao);
	}
	
	
	
}
