#include<stdio.h>

void converte10para5(int decimal){
	if (num < 5){
		printf("%d", decimal);

		}else{
		converte10para5(decimal/5);
		printf("%d", decimal%5);
		}
}

int main (void){
	int numero;
	scanf("%d",&numero);
	converte10para5(numero);
	return 0;
}