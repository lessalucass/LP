#include <stdio.h>

main(){
	int n1;
	
	do{
		printf("Digite um número: ");
		scanf("%f", &n1);
		
		if(n1>=0){
			printf("Positivo\n");
		}
		else{
			printf("Negativo\n");
		}
	}while(n1!=0);

}
