#include<stdio.h>
#include<conio.h>
#include<string.h>

const int quantidade=21;
void main(){
	printf("Digite uma palavra de ate 20 caracteres:\n");
	char palavra[20]; scanf("%s",palavra);
	int tamanhoPalavra = strlen(palavra);
	int ehPalindromo = 1, i;
	
	for( i=0; i<tamanhoPalavra/2 && ehPalindromo==1; i++)
		if(palavra[i]!=palavra[tamanhoPalavra-1-i])
			ehPalindromo=0;
	
	if(ehPalindromo) printf("A palavra eh um palindromo\n");
	else printf("A palavra nao eh um palindromo\n");
	getch();
	}
