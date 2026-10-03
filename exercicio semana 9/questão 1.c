#include<stdio.h>
#include<conio.h>

const int quantidade=10;
void main(){
	int vet[quantidade], n, k;
	for(k=0;k<quantidade;k=k+1){
		printf("insira um numero inteiro:\n");
	scanf("%d", & vet[k]);
}
	printf("insira um numero inteiro:\n");
	scanf("%d", & n);
	for(k=0;k<quantidade;k=k+1){
		if(n<vet[k]){
			printf("%d\n" ,vet[k]);
		}
	}
	getch();
}
	
