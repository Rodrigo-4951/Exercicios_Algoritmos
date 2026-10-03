#include<stdio.h>
#include<conio.h>

void main(){
	float questoes, certas, acerto, erro;
	printf("insira o numero total de questoes e os acertos:");
	scanf("%f%f", & questoes, & certas);
	acerto=(certas/questoes)*100;
	erro=100-acerto;
	printf("O percentual de acertos eh %.2f%% e o percentual de erros eh %.2f%%",acerto,erro);
	getch();
}
