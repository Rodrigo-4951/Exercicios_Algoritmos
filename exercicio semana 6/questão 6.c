#include <stdio.h>

int main(void){
	printf("Digite um numero inteiro n: ");
	int numero, coluna=1, linha=1;
	scanf("%d",&numero);
	for(linha; linha <= numero; linha++) {
		coluna=1;
		for(coluna; coluna <= linha; coluna++) printf("*");
		putchar('\n');
	}
	return 0;
}


