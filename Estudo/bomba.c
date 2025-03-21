#include <stdio.h>
main(){
	float calcPgto (int diaPgto, float valor);
    int dia;
    float valorMensalidade;
    float valorPagar;

    do{
        printf("Dia do pagamento: \n");
        scanf("%d", &dia);

        if(dia>0){
            printf("Valor da mensalidade: \n");
            scanf("%f", &valorMensalidade);

            valorPagar = calcPgto(dia, valorMensalidade);
            printf("Valor a pagar: %2.f \n", valorPagar);
        }
    }while(dia>0);
}

float calcPgto (int diaPgto, float valor){
    float valorFinal;

    if(diaPgto<15){
        float desconto = (valor*10)/100;
        valorFinal = valor - desconto;
    }else{
        if(diaPgto==15){
            valorFinal==valor;
        }else{
            int diasAtrasado = diaPgto - 15;
            valorFinal = valor + (diasAtrasado*0.5);
        }
    }
    return valorFinal;
}
