#include <stdio.h>

main(){
	float macas, vtotal;
	printf("Digites quantas maçâs foram compradas: ");
	scanf("%f", &macas);
	if(macas>=12){
		vtotal=macas*1.00;
		printf("O valor total será de de: %f", vtotal);
	}
	if(macas<12){
		vtotal=macas*1.25;
		printf("O valor total será de: %f", vtotal);
	}
}
