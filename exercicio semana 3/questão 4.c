#include<stdio.h>
#include<conio.h>

void main(){
	int ano, bis, bis2;r
	printf("insira o ano:");
	scanf("%d", & ano);
	bis=ano%4;
	bis2=ano%100;
	if(bis==0 && bis2!=0){
		printf("O ano eh bissexto");
	}
	else{
		printf("O ano nao eh bissexto");
	}
	getch();
}
