#include<stdio.h>
#include<conio.h>

void main (){
	float celsius, fahrenheit, kelvin;
	printf("informe a temperatura em celsius:");
	scanf("%f", & celsius);
	fahrenheit=(celsius * 9/5) + 32;
	kelvin=celsius + 273.15;
	printf("A temperatura em farenheit eh %.2f\n e a temperatura em kelvin eh  %.2f\n", fahrenheit, kelvin);
	getch();
}
