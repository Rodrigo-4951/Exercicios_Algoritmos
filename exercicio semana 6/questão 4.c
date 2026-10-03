#include<stdio.h>
#include<conio.h>

void main(){
	int num, k, a, b, c;
	a=1;
	b=1;
	printf("insira o numero:");
	scanf("%d", &num);
	for(k=1;k<=num;k=k+1){
		printf("%d,", a);
		c=a+b;
		a=b;
		b=c;	
	}
	getch();
}

