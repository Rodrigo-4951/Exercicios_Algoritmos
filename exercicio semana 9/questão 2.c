#include<stdio.h>
#include<conio.h>

const int quantidade=10;
void main(){
	int vet[quantidade],impar, k;
	for(k=0;k<quantidade;k=k+1){
		printf("insira um numero inteiro");
		scanf("%d", & vet[k]);
	}
	for(k=0;k<quantidade;k=k+1){
		if(vet[k]%2!=0){
			vet[k]=vet[k]+1;	
		}
		printf("%d ", vet[k]);
	}
	getch();
}
