/*
Escreva um programa que receba o nome de um arquivo
binário, o qual armazena números em ponto flutuante. O
programa deve ler todos esses valores e imprimir na tela o
maior número encontrado.
*/
#include<stdio.h>
#include<stdlib.h>
int main(void){

	FILE *arq;
	char nome_arquivo[49];
	float *num;
	float *recebe, maior;
	int i, tam;
	//define tamanho do vetor
	puts("digite a quantidade de numeros que deseja");
	scanf("%d", &tam);
	//aloca espaco na memoria
	if((num = (float*) malloc(sizeof(float)*tam)) == NULL){
		printf("erro de alocacao na memoria");
		return 1;
	}

	//preenche vetor de numeros reais
	for(i=0; i<tam; i++){
		printf("digite o elemento %d\n\n", i);
		scanf("%f", (num+i));
	}

	puts("digite o nome do arquivo");
	scanf("%s", nome_arquivo);

	//verifica sucesso na abertura do arquivo
	if((arq=fopen(nome_arquivo,"wb+")) == NULL){
		printf("erro na abertura do arquivo %s", nome_arquivo);
		return 2;
	}
	//escreve vetor no arquivo binario criado
	fwrite(num,sizeof(float),tam,arq);

	if((recebe = (float*) malloc(sizeof(float)*tam)) == NULL){
		printf("erro ao alocar memoria");
		return 3;
	}

	//le os valores e armazena em "*recebe"
	fread(recebe,sizeof(float),tam,arq);

	//inicializa valor inicial para maior
	maior = recebe[0];
	//percorre o vetor e verifica o elemento de maior valor
	for(i=0; i<tam; i++){
		if(recebe[i]>maior){
			maior = recebe[i];
		}
	}

	printf("%.2f é o maior valor", maior);
	fclose(arq);
	return 0;
}