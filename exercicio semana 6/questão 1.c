#include<stdio.h>
#include<conio.h>

void main(){
	float altura, peso, imc;
	int abaixo=0, normal=0, acima=0, k;
	for(k=1;k<=10;k=k+1){
	printf("pessoa %d\n", k);
	printf("insira o peso e a altura:");
	scanf("%f%f", &peso, &altura);
	imc=peso/(altura*altura);
	printf("imc:%.2f\n", imc);
		if(imc<18.5){
			printf("abaixo do peso\n");
			abaixo=abaixo+1;
		} else if(imc<=24.9){
			printf("peso adequado\n");
			normal=normal+1;
		} 		else{
			printf("acima do peso\n");
			acima=acima+1;
		}
	}
	abaixo=abaixo*10;
	normal=normal*10;
	acima=acima*10;
	printf("abaixo do peso: %d %\n", abaixo);
	printf("na media de peso: %d %\n", normal);
	printf("acima do peso: %d %\n", acima);
	getch();
}
