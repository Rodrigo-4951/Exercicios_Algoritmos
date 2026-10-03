#include<stdio.h>
#include<conio.h>
#include<math.h>

void main(){
	float x1,x2,y1,y2, distancia;
	printf("escreva as coordenadas de P e Q:");
	scanf("%f%f%f%f",& x1,& y1,& x2,& y2);
	distancia=sqrt(pow((x1-x2),2)+pow((y1-y2),2));
	printf("a distancia entre P e Q eh %.2f",distancia);
	getch();
}
