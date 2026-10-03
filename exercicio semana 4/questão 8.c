#include<stdio.h>
#include<conio.h>

void main(){
	int horas, minutos, fuso;
	printf("Insira as horas, minutos e o fuso horario:");
	scanf("%d%d%d", & horas, & minutos, & fuso);
	int horaatt=horas+fuso;
	if(horaatt>24){
	int excedente=horaatt-24;
	int novahr=0+excedente;
	printf("a hora eh %d horas e %d minutos", novahr, minutos);
	}	else if(horaatt<0){
		int novahr=24+horaatt;
		printf("a hora eh %d horas e %d minutos", novahr, minutos);
	}		else{
		printf(" a hora eh 00 horas e %d minutos", minutos);
	}
	getch();
}
