#include<stdio.h>
#include<conio.h>

void main(){
	char estado;
	printf("Informe o estado civil:");
	scanf("%c", & estado);
	switch(estado){
		case 's': printf("O estado civil eh solteiro"); break;
		case 'c': printf("O estado civil eh casado"); break;
		case 'd': printf("O estado civil eh divorciado"); break;
		case 'v': printf("O estado civil eh viuvo"); break;
		default: printf("estado civil invalido");
	}
	getch();
}
