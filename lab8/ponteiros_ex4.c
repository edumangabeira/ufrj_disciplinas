/*
Eduardo Freire Mangabeira
Data:29/10/2018
github: /edumangabeira
descrição: quarta atividade do lab 8

Entrada: n inteiros e n floats
Saida: arquivo binario com os dados de entrada
*/
#include<stdio.h>
#include<stdlib.hs>
int main(){
	float *f_value;
	int *d_value;
	int i, tam;
	FILE *arq;
	char nome_arq[20];

	puts("digite o nome do arquivo(no maximo 19 caracteres):");
	scanf("%19s", nome_arq);

	//abre arquivo para escrita binaria(leitura = "rb")
	arq = fopen(nome_arq, "wb");

	if (arq == NULL){
		puts("erro na abertura do arquivo");
		return 1;
	}

	puts("Digite a quantidade de elementos dos vetores");
	scanf("%d\n\n", tam);

	f_value = (float *) malloc(sizeof(float)*tam);
	if(!f_value){
		puts("erro de alocacao de memoria");
		return 1;
	}

	d_value = (int *) malloc(sizeof(int)*tam);
	if(!f_value){
		puts("erro de alocacao de memoria");
		return 1;
	}
	
	printf("\tapresente abaixo o valor de %d numeros reais e %d numeros inteiros\n\n", tam);

	for(i = 1; i <= tam; i++){
		printf("\ndigite o valor do real %d: ", i);
		scanf("%f", f_value+i);

		printf("\ndigite o valor do inteiro %d: ", i);
		scanf("%d", d_value+i);

		printf("\n------------------------------------------");
	}

	fwrite(f_value, sizeof(float), N, arq);
	fwrite(d_value, sizeof(int), N, arq);

	free(f_value);
	free(d_value);
	fclose(arq);
	return 0;
}