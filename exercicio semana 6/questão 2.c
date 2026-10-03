#include<stdio.h>
#include<conio.h>

void main(){
	int m, n, k, i;
	printf("insira a base e o expoente:");
	scanf("%d%d", &m, &n);
	k=2;
	i=m;
	for(k;k<n;k=k+1){
		m=m*i;
	}
	printf("o resultado da potencia eh %d", m);
	getch();
}
