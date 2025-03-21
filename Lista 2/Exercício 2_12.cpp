#include <stdio.h>

main(){
	int v1, v2;
	printf("Escreva o primeiro valor: ");
	scanf("%d", &v1);
	printf("Escreva o segundo valor: ");
	scanf("%d", &v2);
	
	if(v1>v2){
		printf("%d", v1);
	}
	if(v2>v1){
		printf("%d", v2);
	}
	if(v1==v2){
		printf("Inválido, valores iguais.");
	}
	
}
