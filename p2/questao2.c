/*
Eduardo Freire Mangabeira
04/12/2018
github:/edumangabeira

Descrição: operador de vendas
*/
#include<stdio.h>
#include<stdlib.h>

typedef struct 
	{
		char nome[20]; float valor;
	}tItem;

int carregaArquivo(tItem **itens){
	int codigo, i, n;
	char nome_arq[50];
	FILE *arq;
	tItem *itens;

	puts("entre com o nome do arquivo de entrada");
	scanf("%s", nome_arq[50]);

	if((arq = fopen(nome_arq, "w")) == NULL){
		printf("erro na abertura do arquivo %s", nome_arq);
		return -1;
	}

	fscanf(arq, "%d", &n);

	if((itens = (tItem*)malloc(sizeof(tItem)*n)) == NULL){
		printf("erro de alocacao de memoria");
		return -2;
	}

	for(i=0 ;i<n; i++){
		fscanf(arq, "%d %s %f", &codigo, itens[i].nome, &itens[i].valor);
		printf("%d %s %.2f\n", codigo, itens[i].nome, &itens[i].valor);
	}
	fclose(arq);
	return n;
}

int main(){
	FILE *saida; 
	tItem *itens;
	float total = 0; 
	int codigo, qtde; 
	float totalItem;
	if(carregaArquivo(&itens) < 0) 
		return 1;

	saida = fopen("cupon.txt", "w");
	if (saida == NULL) {
		printf("Erro de abertura do arquivo %s.\n", "cupon.txt");
		return 1;
	}
	puts("Informe a lista de compra (codigo + qtde item).\nEntre com -1 0 para finalizar.");

	scanf("%d %d", &codigo, &qtde);

	while(codigo>0) {
		totalItem = itens[codigo-1].valor * qtde;
		total += totalItem;
		fprintf(saida, "%d %s %.2f %d %.2f\n", codigo, itens[codigo-1].nome,
		itens[codigo-1].valor, qtde, totalItem);
		scanf("%d %d", &codigo, &qtde);
	}
	printf("Total: %.2f\n", total);
	fprintf(saida, "Total: %.2f\n", total);
	fclose(saida);
	free(itens);
	return 0;
}