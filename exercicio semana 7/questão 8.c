#include<stdio.h>
#include<conio.h>
#include<math.h>

	const float juros=0.07;
void main(){
	float prestacao_inicial, parcelas, prestacao, financiamento, total=0, diferenca;
	int contador=1;
	printf("insira o valor do financiamento e quantas parcelas:");
	scanf("%f%f", & financiamento, & parcelas);
	prestacao_inicial=financiamento/parcelas;
	prestacao=prestacao_inicial;
	int k;
	printf("o valor da prestacao 1 eh %.2f\n" ,prestacao_inicial);
	for(k=1;k<parcelas;k=k+1){
		prestacao=prestacao+(juros*prestacao);
		contador=contador+1;
		printf("o valor da prestacao %d  eh %.2f\n", contador, prestacao);
		total=total+prestacao;
	}
	total=total+prestacao_inicial;
	printf("o valor total a ser pago eh %.2f reais\n", total);
	diferenca=total-financiamento;
	printf("a diferenca entre o valor inicial e o final eh %.2f", diferenca);
	getch();
}
