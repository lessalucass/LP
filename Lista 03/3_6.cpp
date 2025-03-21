#include <stdio.h>

main(){
	int v1,v2,v3;
	
	printf("Digite o primeiro valor: ");
	scanf("%d", &v1);
	printf("Digite o segundo valor: ");
	scanf("%d", &v2);
	printf("Digite o terceiro valor: ");
	scanf("%d", &v3);
	
	if(v1>v2&&v3){
		printf("O maior valor é: %d", v1);
	}
	else
	if(v2>v1&&v3){
		printf("O maior valor é: %d", v2);
	}
	else
	if(v3<v2&&v1){
		printf("O maior valor é: %d", v3);
	}
}
