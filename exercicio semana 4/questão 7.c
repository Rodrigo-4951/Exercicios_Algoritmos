#include<stdio.h>
#include<conio.h>
#include<string.h>

void main(){
	char verbo[30]; 
	char radical[30];
	int tamanho;
	printf("digite o verbo:");
	scanf("%s", verbo);
	tamanho=strlen(verbo);
	strncpy(radical, verbo, tamanho - 2);
	radical[tamanho - 2] = '\0';
	if (strcmp(&verbo[tamanho - 2], "ar") == 0) {
        printf("\nPresente do Indicativo:\n");
        printf("Eu %so\n", radical);
        printf("Tu %sas\n", radical);
        printf("Ele/Ela %sa\n", radical);
        printf("Nos %samos\n", radical);
        printf("Vos %sais\n", radical);
        printf("Eles/Elas %sam\n", radical);
} 
	else if (strcmp(&verbo[tamanho - 2], "er") == 0) {
        printf("\nPresente do Indicativo:\n");
        printf("Eu %so\n", radical);
        printf("Tu %ses\n", radical);
        printf("Ele/Ela %se\n", radical);
        printf("Nos %semos\n", radical);
        printf("Vos %seis\n", radical);
        printf("Eles/Elas %sem\n", radical);

    } else if (strcmp(&verbo[tamanho - 2], "ir") == 0) {
        printf("\nPresente do Indicativo:\n");
        printf("Eu %so\n", radical);
        printf("Tu %ses\n", radical);
        printf("Ele/Ela %se\n", radical);
        printf("Nos %simos\n", radical);
        printf("Vos %sis\n", radical);
        printf("Eles/Elas %sem\n", radical);

    } else {
        printf("Verbo inválido ou não regular.\n");
    }
	getch();
}
