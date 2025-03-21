#include <stdio.h>

main(){
	
	int i, vetor_c[100], vetor_d[100];
	
	for(i=0;i<=100;i++){
		printf("Digite o valor de %d:", i+1);
		scanf("%d", &vetor_c[i]);
	}
	
	if(vetor_c[i]>=60){
		vetor_c[i]==0;
	}
	
	for(i=0;i<=100;i++){
		vetor_d[i]==vetor_c[i];
	}
	
	for(i=0;i<=100;i++){
		printf("%d", vetor_d[i]);
	}
}
