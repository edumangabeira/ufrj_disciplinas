/*
Eduardo Freire Mangabeira
Data:29/10/2018
github: /edumangabeira
descrição: quarta atividade do lab 8

Entrada: 5 inteiros e 5 floats
Saida: arquivo binario com os dados de entrada,
*/
#define N 5
#include<stdio.h>
int main(){
	float f_value[N];
	int d_value[N];
	int i;
	FILE *arq;

	//abre arquivo para escrita binaria(leitura = "rb")
	arq = fopen("valores.dat", "wb");

	if (arq == NULL){
		puts("erro na abertura do arquivo");
		return 1;
	}
	printf("apresente abaixo o valor de 5 numeros reais e 5 numeros inteiros");

	for(i = 1; i <= N; i++){
		printf("\ndigite o valor do real %d: ", i);
		scanf("%f", &f_value[i]);

		printf("\ndigite o valor do inteiro %d: ", i);
		scanf("%d", &d_value[i]);

		printf("\n------------------------------------------");
	}

	fwrite(f_value, sizeof(float), N, arq);
	fwrite(d_value, sizeof(int), N, arq);

	fclose(arq);
	return 0;
}