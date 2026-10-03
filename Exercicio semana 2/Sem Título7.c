#include<stdio.h>
#include<conio.h>

void main(){
	float horas, valor, salario, extra, total;
	printf("Insira a quantidade de horas e o valor por horas:");
	scanf("%f%f", & horas, & valor);
	salario= 160*valor;
	extra=horas-160;
	total=salario+(extra*(valor*1.5));
	printf("O salario total eh %.2f reais\n", total);
	getch();
}
