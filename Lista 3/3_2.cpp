#include <stdio.h>

main(){
	int golpel, golbra;
	
	printf(" Digite quantos gols o Pelotas fez: ");
	scanf("%d", &golpel);
	
	printf("Digite quantos gols o Brasil fez: ");
	scanf("%d", &golbra);
	
	if(golpel>golbra){
	printf("O vencedor � o Pelotas");	
	}
	if(golpel<golbra){
		printf("O vencedor � o Brasil");
	}
	if(golpel==golbra){
		printf("Empate");
	}
}
