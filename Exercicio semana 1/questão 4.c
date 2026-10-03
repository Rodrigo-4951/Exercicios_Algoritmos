#include<stdio.h>
#include<conio.h>
const float conversao=3.6;

void main (){
	float kmh, ms;
	printf("informe a distancia percorrida em kilometros por hora:");
	scanf("%f", & kmh);
	ms=kmh/conversao;
	printf("A distancia percorrida em metros por segundo eh %.2f\n", ms);
	getch();
}
