#include <stdio.h>

main(){
	int numeros[5], i;
	
	printf("Digite 5 n�meros inteiros: \n");
	
	for(i=0; i<5; i++){
		scanf("%d", &numeros[i]);
	}
	
	printf("\n Os n�meros na ordem inversa s�o:\n");
	
	for(i=4; i>=0; i--){
		printf("%d ", numeros[i]);
	}
	
	return 0;
}
