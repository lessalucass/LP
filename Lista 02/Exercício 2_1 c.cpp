#include <stdio.h>

main(){
	int a,b,c;
	
	printf("Escreva o valor de A: ");
	scanf("%d", &a);
	printf("Escreva o valor de B: ");
	scanf("%d", &b);
	
	c=a;
	
	b=c;
	
	a=b;
	printf("%d,", a);
	printf("%d,", b);
	printf("%d", c);
}
