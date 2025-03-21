#include <stdio.h>

main(){
float n1,n2,n3,n4, media;

printf("Digite a primeira nota: ");
scanf("%f", &n1);
printf("Digite a segunda nota: ");
scanf("%f", &n2);
printf("Digite a terceira nota: ");
scanf("%f", &n3);
printf("Digite a quarta nota: ");
scanf("%f", &n4);

media=(n1+n2*2+n3*3+n4)/7;
printf("Média: %.2f\n", media);

if(media>=9.0){
	printf("Conceito A");
}
if(media>=7.5 && media<9.0){
	printf("Conceito B");
}
if(media>=6.0 && media<7.5){
	printf("Conceito C");
}
if(media<6.0){
	printf("Conceito D");
}

}

