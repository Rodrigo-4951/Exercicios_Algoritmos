#include<stdio.h>
#include<conio.h>
const float conversao=2.54;

void main (){
	float polegadas, cm;
	printf("Insira a quantidade de polegadas:");
	scanf("%f", & polegadas);
	cm=conversao * polegadas;
	printf("o tamanho em cm eh %.2f\n", cm);
	getch();
}
