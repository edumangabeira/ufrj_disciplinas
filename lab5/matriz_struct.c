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
void somaMatrizes(int mat1[][]);
void matrizQuadrada(int mat1[N][N], int row, int col);

int main(void){
	Dimensoes dim;
	int i, j, k; //indices
	int matriz[][N];
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
		printf("Deseja somar as duas matrizes?");
		scanf("%c", &resposta);
		if(resposta == 's'){
			somaMatrizes(matriz[][], matriz[][], row, col);
		}
	}

	return 0;
}