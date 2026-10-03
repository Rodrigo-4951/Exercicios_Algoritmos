#include<stdio.h>
#include<conio.h>

void main(){
	int n, k;
	printf("escreva o numero inteiro a ser divivido:");
	scanf("%d", &n);
	k=1;
	for(k=1;k<=n;k=k+1){
		if(n%k==0){
		printf("o numero %d eh divisor de %d\n", k, n);
}
}
	getch();
}
