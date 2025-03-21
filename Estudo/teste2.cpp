#include <stdio.h>

main(){
	int numeros[5], i;
	
	printf("Digite 5 números inteiros: \n");
	
	for(i=0; i<5; i++){
		scanf("%d", &numeros[i]);
	}
	
	printf("\n Os números na ordem inversa são:\n");
	
	for(i=4; i>=0; i--){
		printf("%d ", numeros[i]);
	}
	
	return 0;
}
