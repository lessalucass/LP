#include <stdio.h>

main(){
	int v1,v2,v3,adicao;
	
	printf("Escreva o primeiro valor: ");
	scanf("%d", &v1);
	printf("Escreva o segundo valor: ");
	scanf("%d", &v2);
	printf("Escreva o terceiro valor: ");
	scanf("%d", &v3);
	
	if(v1>v2&&v3){
		adicao= v1+v2;
		printf("O resultado é: %d", adicao);
	}else
	if(v2>v3&&v1){
		adicao=v2+v3;
		printf("O resultado é: %d", adicao);
	}else
	if(v3>v1&&v2){
		adicao=v3+v1;
		printf("O resultado é: %d", adicao);
	}
}
