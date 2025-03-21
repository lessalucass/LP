#include <stdio.h>
#include <math.h>
/* main(){
	float a,b,area;
	
	printf("Escreva o valor do lado A do triângulo:");
	scanf("%f", &a);
	printf("Escreva o valor do lado B do triângulo:");
	scanf("%f", &b);
	area= a*b/2;
	printf(" A área é: %f /n", area);
}
*/

/*
main(){
	float b,area;
	
	printf("Escreva o valor do lado B:");
	scanf("%f", &b);
	area=b*b;
	printf("A área é: %f /n", area);
}
*/

/*
main(){
	float a,b,area;
	
	printf("Escreva o valor do lado a:");
	scanf("%f", &a);
	printf("Escreva o valordo lado b:");
	scanf("%f", &b);
	area=a*b;
	printf("A area é: %f /n", area);	
}
*/

main(){
	float c, area;
	
	printf("Escreva o valor do raio:");
	scanf("%f", &c);
	area=M_PI * pow(c,2);
	printf("A area é: %f /n", area);	
}
