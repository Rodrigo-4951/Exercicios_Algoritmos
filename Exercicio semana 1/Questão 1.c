#include<stdio.h>
#include<conio.h>

void main (){
	int numero, antecessor, sucessor;
	printf("insira numero inteiro:");
	scanf("%d",& numero);
	antecessor=numero-1;
	sucessor=numero+1;
	printf("O antecessor eh %d\n e o sucessor eh %d\n", antecessor,sucessor);
	getch();
}
