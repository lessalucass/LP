//12.1 Escreva um algoritmo para ler um valor inteiro X. A seguir preencher um vetor de 10 elementos com o valor X. Escrever o conteúdo do vetor após seu total preenchimento.//

#include <stdio.h>
main(){
	int x, v[10], i;
	
	printf("Escreva um valor inteiro: ");
	scanf("%d", &x);
	
	for(i=0; i<10; i++){
		v[i]=x;
	printf("%d", x);
	}
}
