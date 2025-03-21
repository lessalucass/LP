#include <stdio.h>

main(){
	int a,b,c;
	
	printf("Escreva o valor de A: ");
	scanf("%d", &a);
	
	printf("Escreva o valor de B: ");
	scanf("%d", &b);
	
	c=a+b;
	
	printf("%d\n", c);
	
	b=10;
	
	printf("%d,", b);
	printf("%d\n", c);
	
	c=a+b;
	
	printf("%d,",a);
	printf("%d,",b);
	printf("%d",c);
		
}
