#include<stdio.h>
#include<conio.h>

const int quantidade=3;
void main(){
	int i, j, n, mat[quantidade][quantidade];
	printf("informe um numero real:");
	scanf("%d", & n);
	for(i=0;i<quantidade;i=i+1){
		for(j=0;j<quantidade;j=j+1){
			printf("preencha a matriz:");
			scanf("%d", & mat[i][j]);
		}
}
	printf("\n a matriz informada foi:\n");
	for(i=0;i<quantidade;i=i+1){
		for(j=0;j<quantidade;j=j+1){
			printf("%d ", mat[i][j]);
}
	printf("\n");
}
	printf("a matriz produto de %d eh:\n", n);
	for(i=0;i<quantidade;i=i+1){
		for(j=0;j<quantidade;j=j+1){
		mat[i][j]=mat[i][j]*n;
		printf("%d ", mat[i][j]);
}
	printf("\n");
}
	getch();
}
