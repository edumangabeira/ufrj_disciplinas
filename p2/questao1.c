/*
Eduardo Freire Mangabeira
04/12/2018
github:/edumangabeira

Descrição: Recebe da entrada padrao (teclado) N elementos do tipo tItem(*) e armazene esse conteudo em um
arquivo binario O valor de N e o nome do arquivo binario deverao ser informados pelo usuario na linha
de comando.
 ´
OBS(*): typedef struct { char descricao[20]; int codigo; float valor; } tItem; 
*/
#include<stdio.h>
#include<stdlib.h>

typedef struct 
	{
		char descricao[20]; int codigo; float valor;
	}tItem;

//Recebe N elementos do tipo tItem e os armazena em um arquivo bin´ario
int main(int argc, char *argv[]){

	//arquivo de saida
	FILE *arq;
	//vetor de itens
	tItem *itens;
	
	int n,//quantidade de itens
		i;//variavel auxiliar

	//verifica argumentos de entrada
	if(argc < 3){
		printf("digite %s <quantidade de itens> <nome do arquivo de saida>\n", argv[0]);
		return 1;
	}
	//armazena quantidade de itens
	n = atoi(argv[1]);

	//abre arquivo e verifica se houver falha na abertura
	if((arq = fopen(argv[2], "wb")) == NULL){
		printf("\nerro na abertura do arquivo %s\n", argv[2]);
		return 2;
	}

	itens = (tItem*) malloc(sizeof(tItem)*n);
	if(itens == NULL){
		printf("erro de alocacao na memoria para os %d itens", n);
		fclose(arq);
		return 3;
	}
	//le os n itens do teclado
	printf("Digite os %d itens (descricao, codigo e valor):\n", n);
	for(i=0; i<n; i++){
		scanf("%s%d%f", itens[i].descricao, &itens[i].codigo, &itens[i].valor);
	}

	if(fwrite(itens, sizeof(tItem), n, arq) < n){
		printf("erro na escrita dos %d itens no arquivo %s", n, argv[2]);
	else
		printf("os %d itens foram escritos com sucesso no arquivo %s", n, argv[2]);
	}
	free(itens);
	fclose(arq);
	return 0;
	
}