#include<stdio.h>
#include<conio.h>

void main(){
	float alcool, gas1, gas2, valor;
	printf("insira o valor do alcool e da gasolina:");
	scanf("%f%f", & alcool, & gas1);
	gas2=gas1*0.7;
	if(gas2<=alcool){
		printf("abasteca com gasolina");
	}
	else{
		printf("abasteca com alcool");
	}
	getch();
}
