#include <stdio.h>

main(){
	float macas, vtotal;
	printf("Digites quantas ma��s foram compradas: ");
	scanf("%f", &macas);
	if(macas>=12){
		vtotal=macas*1.00;
		printf("O valor total ser� de de: %f", vtotal);
	}
	if(macas<12){
		vtotal=macas*1.25;
		printf("O valor total ser� de: %f", vtotal);
	}
}
