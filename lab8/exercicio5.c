/*
Eduardo Freire Mangabeira
Data:29/10/2018
github: /edumangabeira
descrição: quinta atividade do lab 8

Entrada: arquivo binario com inteiros e floats
Saida: 5 inteiros e 5 floats exibidos na tela
*/
#define N 5
#include<stdio.h>
int main(){
	float f_value[N];
	int d_value[N];
	int i;
	FILE *arq;

	//abre arquivo para leitura binaria
	arq = fopen("valores.dat", "rb");
	
	fread(f_value, sizeof(float), N, arq);
	fread(d_value, sizeof(int), N, arq);

	if (arq == NULL){
		puts("erro na abertura do arquivo");
		return 1;
	}

	for(i = 1; i <= N; i++){
		printf("\n%f", f_value[i]);

		printf("\n%d", d_value[i]);

		printf("\n------------------------------------------");
	}

	fclose(arq);
	return 0;
}