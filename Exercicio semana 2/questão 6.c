#include<stdio.h>
#include<conio.h>

void main(){
	int mb, kbs,segundos, minutos, horas;
	printf("informe o tamanho do arquivo em mb e a velocidade em kbs:");
	scanf("%d%d",& mb, &kbs);
	int conversao=mb*1024;
	int download=conversao/kbs;
	horas=download/3600;
	minutos=(download%3600)/60;
	segundos=(download%3600)%60;
	printf("o download demorara %d horas %d minutos e %d segundos\n", horas,minutos,segundos);
	getch();
}
