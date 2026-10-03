#include<stdio.h>
#include<conio.h>

void main(){
	int ang1, ang2, ang3;
	printf("insira 3 angulos de um triangulo:");
	scanf("%d%d%d", & ang1, & ang2, & ang3);
	if(ang1==90 || ang2==90 || ang3==90){
		printf("O triangulo eh retangulo");
		}
		else{
			printf("o triangulo nao eh retangulo");
		}
	getch();
}
