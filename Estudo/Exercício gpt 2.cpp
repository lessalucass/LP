/*Criar um programa que solicita ao usu�rio para inserir dois conjuntos de n�meros inteiros em dois vetores diferentes 
e, em seguida, soma os elementos correspondentes dos vetores e exibe o resultado.*/
#include <stdio.h>

main(){
	int v[2], i, soma;
	soma=0;
	
	printf("Escreva dois valores: ");
	for(i=0; i<2; i++){
		scanf("%d, ", &v[i]);
	}
	
	for(i=0; i<2; i++){
		soma += v[i]; 
	}
	printf("O resultado �: %d", soma);
	
	return 0;
}
