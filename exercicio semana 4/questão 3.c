#include<stdio.h>
#include<conio.h>

void main(){
	int x, y, reta_y;
	printf("insira as coordenadas x e y:");
	scanf("%d%d", & x, & y);
	reta_y=2*x+1;
	if(y==reta_y){
		printf("O ponto %d %d pertence a reta", x, y);
	}
	else{
		printf("O ponto %d %d nao pertence a reta", x, y);
	}
	getch();
}
