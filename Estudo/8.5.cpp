#include <stdio.h>

main(){
	int n, i;
	
	do{
	printf("Escreva um valor: ");
	scanf("%d", &n);

	for(i=1; i<=n; i++){
		printf("Programa��o\n");
	}
	}while(n<0);
	
	
}
