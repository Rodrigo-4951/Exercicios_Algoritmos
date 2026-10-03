#include<stdio.h>
#include<conio.h>
#include<math.h>
const float kwh=0.35;
const float icms=1.17;
const float publica=15;

void main(){
	float conta1, conta2, valor1, valor2, total;
	printf("insira o valor das duas leituras em KWh:");
	scanf("%f%f", & conta1, & conta2);
	valor1=(conta1*kwh)*icms+publica;
	valor2=(conta2*kwh)*icms+publica;
	total=valor1+valor2;
	printf("O valor total das leituras eh %.2f reais", total);
	getch();
}
