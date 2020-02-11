/*
Eduardo Freire Mangabeira
github:/edumangabeira
Descrição:Escreva um programa em C que imprima uma figura como a mostrada abaixo. O número
de linhas da figura deve ser informado pelo usuário.  No exemplo abaixo o número de
linhas informado foi 6.

	     *
	    ***
      	   *****
	  *******
	 *********
	***********
Entrada: número de linhas.
Saída: figura geométrica.

*/

#include <stdio.h>
int main (void){

	int n;//quantidade de andares da piramide
	int aux, aux_1, aux_2;
	aux = 0;
	puts("digite a quantidade de andares da sua piramide\n\t\t\n");
	scanf("%d", &n);
	while(aux < n){
		aux_1 = n;
		aux_2 = 0;
		while(aux_1 >= aux){
			printf(" ");
			aux_1 = aux_1 - 1;

		}

		while(aux_2 <= aux * 2){
			printf("*");
			aux_2 = aux_2 + 1;

		}
		printf("\n");
		aux = aux + 1;

	}

	return 0;

}
