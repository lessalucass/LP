#include <stdio.h>

main(){
	int nasc, atual;
	printf("Escreva o ano que voc� nasceu: ");
	scanf("%d", &nasc);
	printf("Digite o ano atual: ");
	scanf("%d", &atual);
	
	if(nasc-atual>=16){
		printf("Pode votar");
	} 
	else{
		printf("N�o pode votar");
	}
}
