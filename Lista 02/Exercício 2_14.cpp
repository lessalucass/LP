#include <stdio.h>

main(){
	int n;
	printf("Digite um número inteiro positivo: ");
	scanf("%d", &n);
	
	if(n%2 == 1){
		printf("Ímpar");
	}
	else{
		printf("Par");
	}
}
