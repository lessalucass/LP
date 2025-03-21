#include <stdio.h>

main(){
	int idade[5], i, contador, soma, media;
	contador=0;
	
	printf("Escreva a idade dos alunos: ");
	for(i=0; i<5; i++){
		scanf("%d", &idade[i]);
		soma = soma + idade[i];
	}
	
	media = soma/5;
	
	for(i=0; i<5; i++){
		if(idade[i]>media){
			contador++;
		}
	}
	
	printf("Existem %d alunos que estão acima da média de idade.", contador); 
}
