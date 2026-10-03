#include<stdio.h>
#include<conio.h>

void main(){
	int m, n, x, y;
	printf("insira 2 numeros:");
	scanf("%d%d", &m, &n);
	for(x=m;x<=n;x=x+1){
		for(y=x;y<=n;y=y+1){
			printf("(%d,%d)", x, y);
		}
	}
	getch();
}
