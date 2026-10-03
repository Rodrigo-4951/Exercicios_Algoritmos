#include<stdio.h>
#include<conio.h>

void main(){
	int x, y;
	printf("insira as coordenadas x e y:");
	scanf("%d%d", & x, & y);
	if(x>0 && y>0){
		printf("O ponto pertence ao quadrante 1");
	}
	else if(x<0 && y>0){
		printf("O ponto pertence ao quadrante 2");
	}
		else if(x<0 && y<0){
			printf("O ponto pertence ao quadrante 3");
		}
			else{
				printf("O ponto pertence ao quadrante 4");
			}
	getch();
}
