//12.2 Escreva um algoritmo para preencher um vetor de 10 elementos com os valores de 101 a 110. Escrever o conteúdo do vetor após seu total preenchimento.//
#include <stdio.h>
main(){
	int v[10],i;
	
	for(i=0;i<10;i++){
		v[i]= 101+i;
	}
	
	for(i=0;i<10;i++){
		printf("%d ", v[i]);
	}
}
