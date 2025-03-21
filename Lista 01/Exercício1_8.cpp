#include <stdio.h>
#include <math.h>

main(){
	float reproc, percc, repod, percd, contac, contad, conversao, total;
	
	printf("Percentual de alunos reprovados na turma C: ");
	scanf("%f", &percc);
	
	printf("Percentual de alunos reprovados na turma D: ");
	scanf("%f", &percd);
	
	contac= (percc/100)*60;
	conversao= (100-percd);
	contad= (conversao/100)*20;
	total= (percc+percd)*100;
	
	printf("Quantidade de alunos reprovados na turma C: %f", contac);
	
	printf("Quantidade de alunos reprovados na turma D: %f", contad);
	
	printf("Percentual de alunos reprovados no total: %f", total);
}

