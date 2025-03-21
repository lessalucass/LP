/*Reescreva o algoritmo do exercício 7.1, para que seja impressa no final, a quantidade de alunos aprovados,
reprovados ou que ficaram em exame. Considere as seguintes regras:
• Alunos aprovados: Média igual ou superior a 6.
• Alunos reprovados: Média inferior a 3.
• Alunos em exame: Média inferior a 6, mas superior ou igual a 3.*/

#include <stdio.h>
main(){
	float n1, n2, media, resp, alunosap, alunosrep, alunosreav, perap, perrep, perreav;
	alunosap=0;
	alunosrep=0;
	alunosreav=0;
	
	do{
		printf("Digite a primeira nota: ");
		scanf("%f", &n1);
		printf("Digite a segunda nota: ");
		scanf("%f", &n2);
		
		media = (n1+n2)/2;
		
		printf("A média final é: %.1f", media);
	
		printf("\nCalcular a média de outro aluno \n1.Sim \n2.Não?");
		scanf("%f", &resp);
			
		if(media>=6){
			alunosap++;
		}
		if(media<3){
			alunosrep++;
		}	
		if(media<6 && media>3){
			alunosreav++;
		}
		
	}
	while(resp==1);
	
	printf("Quantidade de alunos aprovados: %.1f\n", alunosap);
	
	printf("Quantidade de alunos reprovados: %.1f\n", alunosrep);
	
	printf("Quantidade de alunos em exame: %.1f\n", alunosreav);
	
}
