#include<stdio.h>
#include<conio.h>

	void main(){
		int soma=0, n, divisao, resto=0;
		printf("insira um numero inteiro:");
		scanf("%d", &n);
		do{
		divisao=n%10;
		n=n/10;
		soma=soma+divisao;
		}
		while(n!=0);
		printf("a soma dos algarismos eh %d", soma);
		getch();
}
