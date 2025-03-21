#include <stdio.h>

main(){
	int v[5], i;
	
	printf("Escreva 5 números inteiros: ");
	for(i=0;i<4;i++){
		scanf("%d ", &v[i]);
	}
	
	for(i=4; i>=0; i--){
		printf("%d ", v[i]);
	}
}
