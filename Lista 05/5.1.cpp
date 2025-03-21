#include <stdio.h>

main(){
	int a,b,c;
	a=3;
	b=5;
	c=-2;
	
	if(c=b-2 || !(c!=b && a<b))
		printf("V");
	else
		printf("F");
}
