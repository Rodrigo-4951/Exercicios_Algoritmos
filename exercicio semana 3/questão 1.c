#include<stdio.h>
#include<conio.h>

void main(){
	int num, absol;
	printf("insira um numero inteiro:");
	scanf("%d", & num);
	absol=(-1)*num;
	if(num<0){
		printf("O valor absoluto do numero %d eh %d", num, absol);
	}
	else{
		printf("O valor absoluto do numero %d eh %d", num, num);
	}
	getch();
	}

