#include <stdio.h>

main(){
	float litros, combustivel, desc3a, desc5a, desc4g, desc6g, total_a_pagar1, total_a_pagar2, total_a_pagar3, total_a_pagar4, valor1, valor2, valor3, valor4;
	
	printf("Digite quantos litros foram vendidos: \n");
	scanf("%f", &litros);
	printf("Digite o tipo de combustível: \n1-Álcool\n2-Gasolina\n");
	scanf("%f", &combustivel);
	
	if(combustivel==1){
		if(litros<=20.00){
			valor1=litros*5.47;
			desc3a=valor1*0.03;
			total_a_pagar1=valor1-desc3a;
			printf("O preço a ser pago é: %f", total_a_pagar1);			
		}else
		if(litros>20.00){
			valor2=litros*5.47;
			desc5a=valor2*0.05;
			total_a_pagar2=valor2-desc5a;
			printf("O preço a ser pago é: %f", total_a_pagar2);
		}
	}
	
	if(combustivel==2){
		if(litros<=15.00){
			valor3=litros*6.53;
			desc4g=valor3*0.035;
			total_a_pagar3=valor3-desc4g;
			printf("O preço a ser pago é: %f", total_a_pagar3);
		}else
		if(litros>15.00){
			valor4=litros*6.53;
			desc6g=valor4*0.06;
			total_a_pagar4=valor4-desc6g;
			printf("O preço a ser pago é: %f", total_a_pagar4);
		}
	}
}
