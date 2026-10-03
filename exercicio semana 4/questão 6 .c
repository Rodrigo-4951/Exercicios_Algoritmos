#include<stdio.h>
#include<conio.h>

void main(){
	int cedula10, cedula20, cedula50, cedula100, saque, saida;
	printf("informe o valor do saque:");
	scanf("%d", &saque);
	cedula100=saque/100;
	cedula50=(saque%100)/50;
	cedula20=((saque%100)%50)/20;
	cedula10=(((saque%100)%50)%20)/10;
	if(saque>1000){
	saque=(saque/1000)+1;
		printf("O total a ser sacado sao %d de 100 reais, %d de 50 reais, %d de 20 reais, %d de 10 reais ao longo de %d saques", cedula100, cedula50, cedula20, cedula10, saque);
}	else{
		printf("O total a ser sacado sao %d de 100 reais, %d de 50 reais, %d de 20 reais, %d de 10 reais", cedula100, cedula50, cedula20, cedula10);
}
	getch();
}
