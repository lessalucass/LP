#include <stdio.h>

main(){
	int nlado, mlado, perimetro, area;
	
	printf("Digite a quantidade de lados do pl�gono regular: ");
	scanf("%d", &nlado);
	
	if(nlado==3){
		printf("Digite a medida do lado: ");
		scanf("%d", &mlado);
		printf("Tri�ngulo\n");
		perimetro=mlado+mlado+mlado;
		printf("%d (per�metro)", perimetro);
	}
	if(nlado==4){
		printf("Digite a medida do lado: ");
		scanf("%d", &mlado);
		printf("Quadrado\n");
		area=mlado*mlado;
		printf("%d (�rea)", area);
	}
	if(nlado==5){
		printf("Pent�gono");
	}
	if(nlado<3){
		printf("N�o � um pol�gono");
	}
	if(nlado>5){
		printf("Pol�gono n�o identificado");
	}
}
