#include<stdio.h>
#include<conio.h>

void main (){
	int fibo=0, anterior=0, atual=1, m,n;
	printf("insira dois numeros inteiros:");
	scanf("%d%d", &m, &n);
	while(fibo<=n){
	if(fibo>=m){	
	printf("%d,", fibo);
}
	anterior=fibo;
	fibo=atual;
	atual=fibo+anterior;
}
	getch();
}
