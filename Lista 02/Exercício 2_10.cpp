#include <stdio.h>

main(){
	int senha;
	printf("Esscreva a senha: ");
	scanf("%d", &senha);
	
	if(senha==328014){
		printf("ACESSO PERMITIDO.");
	}
	else{
		printf("ACESSO NEGADO.");
	}
}
