#include<stdio.h>
#include<conio.h>
#include<math.h>
const float juros=1.07;

void main(){
	float emprestimo, prestacao1, prestacao2, prestacao3, prestacao4, prestacao5, jurostotais, total;
	printf("insira o valor do emprestimo:");
	scanf("%f", & emprestimo);
	prestacao1=(emprestimo/5);
	prestacao2=prestacao1*juros;
	prestacao3=prestacao2*juros;
	prestacao4=prestacao3*juros;
	prestacao5=prestacao4*juros;
	total=prestacao1+prestacao2+prestacao3+prestacao4+prestacao5;
	jurostotais=total-emprestimo;
	printf("O valor da prestacao 1 eh %.2f\n O valor da prestacao 2 eh %.2f\n O valor da prestacao 3 eh %.2f\n O valor da prestacao 4 eh %.2f\n O valor da prestacao 5 eh %.2f\n O valor total do emprestimo eh %.2f\n O valor total de juros eh %.2f", prestacao1, prestacao2, prestacao3, prestacao4, prestacao5, total, jurostotais);
	getch();
}
