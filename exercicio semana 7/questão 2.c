#include<stdio.h>
#include<conio.h>

void main(){
	int fibo=0, anterior=0, atual=1, num;
	printf("insira um numero inteiro:");
	scanf("%d", &num);
	while(fibo<=num){
	printf("%d,", fibo);
	anterior=fibo;
	fibo=atual;
	atual=fibo+anterior;
}
	getch();
}
