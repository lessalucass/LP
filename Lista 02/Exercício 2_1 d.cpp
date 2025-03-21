#include <stdio.h>

main(){
	int a,b;
	
	printf("Escreva o valor de A: ");
	scanf("%d", &a);
	
	b=a+1;
	a=b+1;
	b=a+1;
	printf("%d,", b);
	
	a=b+1;
	printf("%d", a);
}
