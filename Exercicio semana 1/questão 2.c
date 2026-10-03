#include<stdio.h>
#include<conio.h>

void main (){
	float base, altura, area;
	printf("Insira a base e a altura do triangulo:");
	scanf("%f %f", &base, &altura);
	area=(base*altura)/2;
	printf("a area do triangulo eh %.2f\n", area);
	getch();
}
