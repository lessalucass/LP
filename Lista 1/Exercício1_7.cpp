#include <stdio.h>
#include <math.h>

main(){
	float eleitores, vbrancos, vnulos, vvalidos, percbranco, percnulos, percvalidos;
	
	printf("Qual a quantidade de eleitores? ");
	scanf("%f", &eleitores);
	
	printf("Quantos votos brancos? ");
	scanf("%f", &vbrancos);
	
	printf("Quantos votos nulos? ");
	scanf("%f", &vnulos);
	
	printf("Quantos votos válidos? ");
	scanf("%f", &vvalidos);
	
	percbranco= 100*vbrancos/eleitores;
	
	percnulos= 100*vnulos/eleitores;
	
	percvalidos= 100*vvalidos/eleitores;
	
	printf("Votos brancos: %f %", percbranco);
		
	printf("Votos nulos: %f %", percnulos);
	
	printf("Votos validos: %f %", percvalidos);
	
	
	
	
}
