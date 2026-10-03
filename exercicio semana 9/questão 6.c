#include<stdio.h>
#include<conio.h>

const int quantidade=3;
void main(){
	int i, j, n, mat1[quantidade][quantidade], mat2[quantidade][quantidade];
	for(i=0;i<quantidade;i=i+1){
		for(j=0;j<quantidade;j=j+1){
			printf("preencha a matriz1:");
			scanf("%d", & mat1[i][j]);
		}
}
	printf("\n a matriz1 informada foi:\n");
	for(i=0;i<quantidade;i=i+1){
		for(j=0;j<quantidade;j=j+1){
			printf("%d ", mat1[i][j]);
	}
		printf("\n");
}
	for(i=0;i<quantidade;i=i+1){
		for(j=0;j<quantidade;j=j+1){
			printf("preencha a matriz2:");
			scanf("%d", & mat2[i][j]);
		}
}
	printf("\n a matriz2 informada foi:\n");
	for(i=0;i<quantidade;i=i+1){
		for(j=0;j<quantidade;j=j+1){
			printf("%d ", mat2[i][j]);
		}
		printf("\n");
}

	printf("a soma das matrizes eh:\n");
	for(i=0;i<quantidade;i=i+1){
		for(j=0;j<quantidade;j=j+1){
			mat1[i][j]=mat1[i][j]+mat2[i][j];
			printf("%d ", mat1[i][j]);
	}
	printf("\n");
}
	getch();
}
