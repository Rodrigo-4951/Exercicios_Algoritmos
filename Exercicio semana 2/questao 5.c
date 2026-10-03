#include<stdio.h>
#include<conio.h>

void main(){
	char candidato1[51], candidato2[51], candidato3[51];
	float votos1, votos2, votos3, total;
	printf("insira o nome dos candidados:");
	scanf("%s%s%s", candidato1,candidato2,candidato3);
	printf("insira a quantidade respectiva de votos:");
	scanf("%f%f%f", & votos1, &votos2, &votos3);
	total=votos1+votos2+votos3;
	float votosc1=(votos1/total)*100;
	float votosc2=(votos2/total)*100;
	float votosc3=(votos3/total)*100;
	printf("o candidato %s recebeu %.2f%% votos, o candidato %s recebeu %.2f%% votos, o candidato %s recebeu %.2f%% votos", candidato1, votosc1, candidato2, votosc2, candidato3, votosc3);
	getch();
}
