#include<stdio.h>
#include<conio.h>

	void main(){
		int n, k, divisao, algarismo, contador=0;
		printf("insira um numero inteiro:");
		scanf("%d", &n);
		printf("insira o enesimo algarismo a ser dito");
		scanf("%d", &k);
		do{
		algarismo=n%10;
		n=n/10;
		contador=contador+1;
		}
		while(contador!=k);
		if(contador>k){
			printf("0");
		}
		else{printf("o enesimo algarismo eh %d", algarismo);
		getch();
		}
}
