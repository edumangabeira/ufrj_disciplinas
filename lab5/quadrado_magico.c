
/*
Eduardo Freire Mangabeira
Data> [21-09-2018]
Descrição: Programa para dizer se dada matriz quadrada é quadrado mágico ou não.
Entrada: Um inteiro representando as dimensões da raiz quadrada e os elementos da matriz.
Saída: Diz se a matriz é quadrado mágico.
*/
#include<stdio.h>
#define N 100
#define M 100
int main(void){
	int i, j, n_value = 0; //contadores
	int n;//dimensao
	int t_soma = 0, soma_col = 0; //somas
	int matriz[M][N];

	while(n_value != 1){
		puts("digite a dimensao que deseja usar para a matriz quadrada");
		scanf("%d",&n);
		if(n < 0 || n > 100){
			puts("dimensao invalida, tente outra vez;");
			n_value = n_value - 1;
		}
		n_value = n_value + 1;
	}

	for(i=0; i < n; i++){
		for (j=0; j < n; j++){
			printf("[%d][%d] = ", i, j);
			scanf("%d",&matriz[i][j]);
			t_soma = t_soma + matriz[i][j];
			if (j == 1){
				soma_col = soma_col + matriz[i][j];
			}
		}
	}
	puts("");
	for(i=0; i < n; i++){
		for (j=0; j < n; j++){
			printf("%d", matriz[i][j]);
			printf("   ");
		}
			puts("");
	}
	puts("\n");
	if((t_soma/n) == soma_col){
		puts("Eh quadrado magico.\n\n");
	}else{
		puts("Nao eh quadrado magico.");
	}
	return 0;
}










