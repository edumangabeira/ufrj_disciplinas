/*
Eduardo Freire Mangabeira
github:/edumangabeira

Descrição:[10-Ago-2018] lab 1: escrevendo pseudocódigo de uma função afim em C.

Entrada: dois números reais.

Saída: a função afim a partir dos coeficientes fornecidos e o valor de 'x'.

*/

#include<stdio.h>

int main(void){

	float cf_angular, cf_linear, x;

	printf("digite os coeficientes da função afim! Angular e linear respectivamente\n\n\n");
	scanf("%f%f", &cf_angular, &cf_linear);

	x = (- cf_linear) / cf_angular;

	printf("o valor de x em f(x) = %.2f x + %.2f eh \t %2.f \n\n", cf_angular, cf_linear, x);

	return 0;
}
