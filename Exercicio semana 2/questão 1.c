#include<stdio.h>
#include<conio.h>

void main(){
	float pedido, conta;
	printf("insira o valor do pedido:");
	scanf("%f",& pedido);
	conta= (pedido*1.1)+10;
	printf("A conta a ser paga eh %.2f\n", conta);

	getch();
}
