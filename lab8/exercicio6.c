/*
Eduardo Freire Mangabeira
Data:26/10/2018
github: /edumangabeira
descrição: sexta atividade do lab 8

Entrada: tres numeros reais
Saída: media aritmetica dos dois reais maiores
*/

#include<stdio.h>

int main(void){
	float num1, num2, num3, media;
	printf("\n\tdigite os numeros reais separados por espacos\n\n");
	scanf("%f%f%f",&num1, &num2, &num3);

	//verifica quais sao os dois maiores
	media = (num1<num2) && (num1<num3) ? (num2 + num3)/2 : (num2 > num3) ? (num2+num1)/2 : (num1+num3)/2 ;
	printf("a media eh: %3.f\n", media);
	return 0;
}