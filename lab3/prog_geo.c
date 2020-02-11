/*
Eduardo Freire Mangabeira
github: /edumangabeira
Descrição:[20-08-2018] lab3 - Apresentar os n primeiros termos de uma PG.
Entrada: Primeiro termo da PG, razão da PG e quantidade de termos da PG.
Saída: Termos da PG.
*/

#include<stdio.h>
int main(void){
	int termo_0, razao, n;//entradas
	int termo_n, aux;//variaveis auxiliares
	puts("digite o primeiro termo, a razao da PG e a quantidade de termos, respectivamente: \n\n");
	scanf("%d%d%d", &termo_0, &razao, &n);
	termo_n = termo_0;
		for(aux = 0;aux <= n ; aux++){
			printf("%d : este eh o termo %d\n",termo_n, aux);
			termo_n = termo_n * razao;
		}
	return 0;
}
