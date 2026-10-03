#include<stdio.h>
#include<conio.h>

void main(){
	int pares=0, impares=0, n, contador_i=0, contador_p=0;
	printf("insira numeros impares ou pares:");
	scanf("%d", & n);
	do{
		if(n%2==0){
			pares=pares+n;
			contador_p=contador_p+1;
		}
			else{
				impares=impares+n;
				contador_i=contador_i+1;
			}
	printf("insira numeros impares ou pares:");
	scanf("%d", & n);
	}
	while(n!=0);
	float resultadop=(float)pares/contador_p;
	float resultadoi=(float)impares/contador_i;
	printf("\n media dos pares %.2f \n media dos impares %.2f", resultadop, resultadoi);
	getch();
}
