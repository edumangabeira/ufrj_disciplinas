
/*
Eduardo Freire Mangabeira
github:/edumangabeira
Descrição:[20-08-2018] lab 3 - Escrever tabuada de 1 a n usando o while.
Entrada: O número inteiro n.
Saída:a tabuada de 1 a n.
*/

#include<stdio.h>
int main(void){

	int n;
	int aux_1, aux_2;//variaveis auxiliares

	printf("digite o numero n\n\n");
	scanf("%d",&n);
	aux_2 = 1;

	while (n >= aux_2){
		aux_1 = 1;

		while (10 >= aux_1){
			printf("%d x %d = %d\n", aux_2, aux_1, aux_1 * aux_2);
			aux_1 = aux_1 + 1;

		}
		printf("\n\n");
		aux_2 = aux_2 +1;
	}
return 0;
}
