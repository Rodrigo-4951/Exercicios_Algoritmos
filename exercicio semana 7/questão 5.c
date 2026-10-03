#include<stdio.h>
#include<conio.h>

void main(){
	int num, soma=0, base=0;
	printf("insira um numero inteiro:");
	scanf("%d", & num);
	while(soma<=num){
	soma=soma+base;
	if(soma<=num){
		printf("%d ",base);
		
	}
	base=base+1;
}
	getch();
}
