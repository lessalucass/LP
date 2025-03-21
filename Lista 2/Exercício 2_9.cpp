#include <stdio.h>

main(){
	float altura, sexo, pideal;
	printf("Qual a sua altura: ");
	scanf("%f", &altura);
	printf("Qual o seu sexo? \n1-Homem \n2-Mulher \n");
	scanf("%f", &sexo);
	if(sexo==1){
		pideal=(72.7*altura)-58;
	}
	if(sexo==2){
		pideal=(62.1*altura)-44.7;
	}
	printf("O seu peso ideal é: %f", pideal);
}
