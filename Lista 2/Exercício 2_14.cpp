#include <stdio.h>

main(){
	int n;
	printf("Digite um n�mero inteiro positivo: ");
	scanf("%d", &n);
	
	if(n%2 == 1){
		printf("�mpar");
	}
	else{
		printf("Par");
	}
}
