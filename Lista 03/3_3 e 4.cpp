#include <stdio.h>

main(){
	int nlado, mlado, perimetro, area;
	
	printf("Digite a quantidade de lados do plígono regular: ");
	scanf("%d", &nlado);
	
	if(nlado==3){
		printf("Digite a medida do lado: ");
		scanf("%d", &mlado);
		printf("Triângulo\n");
		perimetro=mlado+mlado+mlado;
		printf("%d (perímetro)", perimetro);
	}
	if(nlado==4){
		printf("Digite a medida do lado: ");
		scanf("%d", &mlado);
		printf("Quadrado\n");
		area=mlado*mlado;
		printf("%d (área)", area);
	}
	if(nlado==5){
		printf("Pentágono");
	}
	if(nlado<3){
		printf("Não é um polígono");
	}
	if(nlado>5){
		printf("Polígono não identificado");
	}
}
