#include<stdio.h>
#include<conio.h>

void main(){
	int cedula10, cedula 20, cedula50, cedula100, saque, saida;
	printf("informe o valor do saque:");
	scanf("%d", &saque);
	cedula100=saque/100;
	cedula50=(saque%100)/50;
	cedula20=((saque%100)%50)/20;
	cedula10=(((saque%100)%50)%20)/10;
	saida=cedula100+cedula50+cedula20+cedula10;
	printf("O total a se sacado eh %d reais", saida);
	getch();
}
