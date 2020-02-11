/*
Eduardo Freire Mangabeira
github:/edumangabeira
Data: [19/09/2018]
Descrição: Inicializa conjunto de funcoes para operacoes com matrizes e tipo 
abstrato de estrutura fornecendo dimensoes de uma matriz.

*/
typedef struct{
	int row, col;//linhas e colunas
	int dep; //profundidade
	int n4, n5, n6, n7, n8; //quarta ate oitava dimensao
	}Dimensoes;

//soma duas matrizes de dimensoes iguais e retorna a matriz separada por linhas
void somaMatrizes(int mat1[][]);

//Recebe uma matriz quadrada e printa o numero das linhas que possuem elementos iguais,
//com a restrição de só receber elementos que são zero ou um. 
void matrizQuadrada(int mat1[N][N], int row, int col);

//multiplica duas matrizes quadradas
void multiplicaMatriz(mat1[][N], mat2[][N], row, col);