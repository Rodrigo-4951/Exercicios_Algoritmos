#include<stdio.h>
#include<conio.h>

void main (){
	float ti, razao, t1, t2, t3, t4, t5;
	printf("insira o termo inicial e a razao:");
	scanf("%f %f", & ti, & razao);
	t1=ti+razao;
	t2=t1+razao;
	t3=t2+razao;
	t4=t3+razao;
	t5=t4+razao;
	printf("os cinco primeiro termos sao %.2f %.2f %.2f %.2f %.2f", t1, t2, t3, t4, t5);
	getch();
}
