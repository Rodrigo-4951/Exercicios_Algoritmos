#include<stdio.h>
#include<conio.h>

void main(){
	float num1, num2, num3;
	printf("insira tres numeros:");
	scanf("%f%f%f", & num1, & num2, & num3);
	if(num1>num2 && num1<num3){
		printf("O numero do meio eh %.2f\n", num1);
	}
	else if(num2>3 && num2<num1){
		printf("O numero do meio eh %.2f\n", num2);
	}	else {
		printf("O numero do meio eh %.2f\n", num3);
	}
	getch();
}
