#include <stdio.h>

main(){
	int v1;
	
	printf("Escreva um valor: ");
	scanf("%d", &v1);
	
	if(v1>100){
		printf("� maior que 100!");
	}
	else{
		printf("N�O � maior que 100");
	}
}
