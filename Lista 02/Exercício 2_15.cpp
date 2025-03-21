#include <stdio.h>

main(){
	int v1, v2;
	printf("Digite o primeiro valor: ");
	scanf("%d", &v1);
	printf("Digite o segundo valor: ");
	scanf("%d", &v2);
	if(v1>v2){
		printf("%d,", v1);
		printf("%d", v2);
	}
	if(v2>v1){
		printf("%d,", v2);
		printf("%d", v1);
	}
}
