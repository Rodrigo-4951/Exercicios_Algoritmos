#include<stdio.h>
#include<conio.h>

void main(){
	int n, k, limite;
	printf("escreva a quantidade de numeros impares:");
	scanf("%d", &n);
	k=1;
	limite=n*2-1;
	while (limite>=k){
	printf("%d\n", k);
	k=k+2;
	}
	getch();	
}
