/*7.1) Escreva um algoritmo para ler 2 notas de um aluno, calcular e imprimir a m�dia final. Logo ap�s escrever a mensagem 
"Calcular a m�dia de outro aluno 1.Sim 2.N�o?" e solicitar uma resposta. Se a resposta for 1, o algoritmo deve ser 
executado novamente, caso contr�rio deve ser encerrado imprimindo a quantidade de alunos aprovados (alunos com 
m�dia igual ou superior a 6)*/

#include <stdio.h>
main(){
	float n1, n2, media, resp, alunos;
	alunos=0;
	
	do{
		printf("Digite a primeira nota: ");
		scanf("%f", &n1);
		printf("Digite a segunda nota: ");
		scanf("%f", &n2);
		
		media = (n1+n2)/2;
		
		printf("A m�dia final �: %.1f", media);
	
		printf("\nCalcular a m�dia de outro aluno \n1.Sim \n2.N�o?");
		scanf("%f", &resp);
			
		if(media>=6){
			alunos++;
		}	
		
	}
	while(resp==1);
	
	printf("Quantidade de alunos aprovados: %.1f", alunos);
}


