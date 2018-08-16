/*
Eduardo Freire Mangabeira
github:/edumangabeira
Descrição:[12-Ago-2018] URI: urionlinejudge.com - Escrever código que calcule a distância entre dois pontos num plano xy.

Entrada: coordenadas de dois pontos no plano.

Saída: distância entre esses dois pontos.
*/

#include<stdio.h>
#include<math.h>

int main(void){

	float x_0, x_1, 
		  y_0, y_1;

	printf("digite as coordenadas do primeiro ponto:\n\n\n");	
	printf("x: \t\t");
	scanf("%f"&x_0);
	printf("y: \t\t");
	scanf("%f"&y_0);

	printf("digite as coordenadas do segundo ponto:\n\n\n");	
	printf("x: \t\t");
	scanf("%f"&x_1);
	printf("y: \t\t");
	scanf("%f"&y_1);

	distancia = sqrt(pow(x_1 - x_0, 2) + pow(y_1 - y_0, 2));


	printf("a distância entre os dois pontos é: %.2f", distancia);

	return 0;
}

