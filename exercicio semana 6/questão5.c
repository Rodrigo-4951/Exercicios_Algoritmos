#include<stdio.h>
#include<conio.h>

void main(){
	int palindromo, n=1000, milhar, centena, dezena, unidade, k;
	for(k=1000;k<=9999;k=k+1){
		palindromo=k;
		milhar=k/1000;
		centena=(k%1000)/100;
		dezena=((k%1000)%100)/10;
		unidade=(((k%1000)%100)%10);
		palindromo=(unidade*1000)+(dezena*100)+(centena*10)+milhar;
		if(palindromo==k){
			printf("%d\n",palindromo);
		}
	}
	getch();
}


