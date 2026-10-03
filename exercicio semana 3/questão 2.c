#include<stdio.h>
#include<conio.h>

void main(){
	int casa, visita;
	printf("insira o numero de gols da casa e da visita:");
	scanf("%d%d", & casa, & visita);
	if(casa>visita){
		printf("O time da casa venceu");
	}
	else if(visita>casa){
		printf("O time visitante venceu");
	}
		else{
			printf("O jogo foi um empate");
		}
		getch();
}
