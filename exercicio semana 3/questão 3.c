#include<stdio.h>
#include<conio.h>

void main(){
	int idade;
	printf("insira a idade:");
	scanf("%d", & idade);
	if(idade<=12){
		printf("O individuo eh uma crianca");
	}
	else if(idade>12 && idade<=17){
		printf("O individuo eh um adolescente");
	}
		else if(idade>=18 && idade<=59){
			printf("o individuo eh um adulto");
		}
		getch();
}
