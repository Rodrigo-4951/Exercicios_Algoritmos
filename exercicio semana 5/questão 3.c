#include<stdio.h>
#include<conio.h>

void main(){
	int m, n, k, soma=0;
	printf("escreva 2 numeros inteiros:");
	scanf("%d%d", &m, &n);
	k=m;
	for(k;k<=n;k=k+1){
	soma=soma+k;
}
	printf("a soma de todos os numeros eh %d", soma);
	getch();
}
