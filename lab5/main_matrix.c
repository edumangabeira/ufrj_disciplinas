/*
Eduardo Freire Mangabeira
github:/edumangabeira
Data: [19/09/2018]
Descrição: Descreve uma matriz de dimensoes dadas pelo usuário e retorna ela preenchida(pelo usuário).
Entrada: dimensoes da matriz.
Saída: Matriz preenchida.

OBS: pesquisar como a linguagem C armazena uma matriz na memória(cache).
*/
#include<stdio.h>
#include "functions_matrix.h"
#define N 20
#define M 20

int main(void){
	Dimensoes dim;
	int i, j, k; //indices
	int m1[][N], m2[][N];//matrizes
	int quant_matriz;//quantidade de matrizes
	char resposta;

	for (k=1; k >= quant_matriz; k++){
		puts("\n\nDigite as dimensoes da matriz 1 desejada no formato 'i x j':", k);
		scanf("%d",&dim.row);
		printf("x");
		scanf("%d",&dim.col);

		puts("Agora entre com os elementos dessa matriz:\n\n");
		
		for(i=0; i < dim.row; i++){
			for (j=0; j < dim.col; j++){
				printf("[%d][%d] = ", i, j);
				scanf("%d",&matriz[i][j]);
			}
		}
	}

	if (dim.row == dim.col){
		//soma
		printf("Deseja somar as duas matrizes?\n\n");
		scanf("%c", &resposta);
		if(resposta == 's'){
			printf("o resultado da soma eh: \n\n")
			somaMatrizes(m1[][], m2[][], dim.row, dim.col);
		}
		
		//multiplicacao
		printf("Deseja multiplicar as duas matrizes?\n\n");
		scanf("%c", &resposta);
		if(resposta == 's'){
			printf("o resultado da multiplicacao eh: \n\n");
			multiplicaMatriz(m1[][], m2[][], dim.row, dim.col);

		//quadrado de 1 e 0
		printf("Deseja achar o quadrado de uma matrizes? (apenas aceita matrizes preenchidas por 0 e 1)\n\n");
		scanf("%c", &resposta);
		if(resposta == 's'){
			matrizQuadrada(m1[][], m2[][], dim.row, dim.col);
		}
	}

	return 0;
}