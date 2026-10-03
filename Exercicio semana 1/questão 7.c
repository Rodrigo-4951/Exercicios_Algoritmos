#include<stdio.h>
#include<conio.h>
const float mquadrado=300;

void main (){
	float largura, comprimento, valor;
	printf("Insira a largura e o comprimento do terreno em metros:");
	scanf("%f %f", & largura, & comprimento);
	valor=(largura*comprimento) * mquadrado;
	printf("O valor do terreno eh %.2f reais",valor);
	getch();
}
