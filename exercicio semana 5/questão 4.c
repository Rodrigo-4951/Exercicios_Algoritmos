#include<stdio.h>
#include<conio.h>

void main(){
	int  t1, razao, n, k, tfinal;
	printf("escreva o termo inicial da pg, a razao e o numero:");
	scanf("%d%d%d", &t1, &razao, &n);
	int soma=t1;
	tfinal=t1+(razao*n);
	k=t1;
	for(k;k<tfinal;k=k+razao){
	soma=soma+razao;
	printf("%d\n" ,soma);	
	}
	getch();
}

