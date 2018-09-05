/*5- Escreva um programa que receba como entrada o raio de um c´ırculo e calcule a sua
area. Crie uma constante para armazenar o valor de PI como 3,14. ´
6- Escreva um progama que receba um numero, verifique se ele ´ e´ par ou ´ımpar e exiba
o resultado na tela.
7- Escreva um programa que receba dois numeros e verifique se eles s ´ ao˜ iguais, se o
primeiro e maior que o segundo ´ ou se o segundo e maior que o primeiro ´ . Imprima na
tela o resultado obtido.
8- Escreva um programa que exiba na tela a tabuada de 2 a 5. */

/*
Eduardo Freire Mangabeira
Descrição: Exercicios 5 a 8 da lista 0. Decidi agrupá-los em funções matemáticas.
*/

#include<stdio.h>
#define pi 3.14
void area_circulo(void);
void par_impar(void);
void igual_maiorque(void);
int tabuada(int fatores);

void area_circulo(void){

	float raio, area;
	printf("digite o raio do circulo\n\n");
	scanf("%f",&raio);

	area = pi * raio;
	printf("a area do circulo eh de: %f\n\n", area);
	return;
}

void par_impar(void){

	int par, impar;
}

int main (void){

}