/*
Eduardo Freire Mangabeira
github:/edumangabeira
Data: [19/09/2018]
Descrição: Conjunto de funcoes para operacoes com matrizes.

*/
#include<stdio.h>
#define N 20

//soma duas matrizes de dimensoes iguais e retorna a matriz separada por linhas
void somaMatrizes(int mat1[][N], int mat2[][N],int row, int col){
	int i,j;
	int soma[row][col];
	for(i=0; i < row; i++){
		for (j=0; j < col; j++){

			soma[i][j] = mat1[i][j] + mat2[i][j];
			printf("%d ", soma[i][j]);
		}
		puts("");
	}
} 

//Recebe uma matriz quadrada e printa o numero das linhas que possuem elementos iguais,
//com a restrição de só receber elementos que são zero ou um. 
void matrizQuadrada(int mat1[][N], int row, int col){
	int i, j;
	int cont1 , cont2;
	for(i=0; i < row; i++){
		cont1 = 0;
		cont2 = 0;
		for (j=0; j < col; j++){

			if((mat1[i][j] == 1){
				cont1 ++;
			}

			if((mat1[i][j] == 0){
				cont2 ++;
			}

			if(cont1 == 0 || cont2 = 0){
				print(row[i]);
			}
		
		//restricao
		if((mat1[i][j]) < 0 || (mat1[i][j]) > 1){
			puts("elemento invalido, interrompendo execucao");
			break;
			}

		}
	}
}

