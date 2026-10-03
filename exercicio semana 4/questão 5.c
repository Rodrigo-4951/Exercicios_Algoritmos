#include<stdio.h>
#include<conio.h>

void main(){
	int num, milhar, centena, dezena, unidade, palindromo;
	printf("insira um numero ente 1000 e 9999:");
	scanf("%d", & num);
	milhar=num/1000;
	centena=(num%1000)/100;
	dezena=(num%100)/10;
	unidade=(num%10);
	palindromo=(unidade*1000)+(dezena*100)+(centena*10)+milhar;
	if(num==palindromo){
		printf("o numero %d  eh um palindromo", num);
	}
	else{
		printf("o numero %d nao eh um palindromo", num);
	}
	getch();
}
