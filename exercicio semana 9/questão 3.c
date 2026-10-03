#include<stdio.h>
#include<conio.h>
const int quantidade=10;
void main(){
	int vet[quantidade], soma=0, media, k;
	for(k=0;k<quantidade;k=k+1){
		printf("insira um numero inteiro:");
		scanf("%d", & vet[k]);
		soma=soma+vet[k];
	}
	media=soma/quantidade;
	for(k=0;k<quantidade;k=k+1){
		if(vet[k]>media){
			printf("%d", vet[k]);
		}
	}
	getch();
}
