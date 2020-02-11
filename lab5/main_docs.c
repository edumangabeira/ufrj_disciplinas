/*
Eduardo Freire Mangabeira
Data: [21/09/2018]
*/
#include<stdio.h>
#include "docs_sort.h"
#define N 50;
#define M 4;
int main(){
	Pessoa ppl;
	int matriz[N][M];
	int vetor[N];
	int qntt_ppl_value, cpf_value, i, j;//contadores
	int qntt_ppl;//qtde de cadastrados

	//valida cadastro
	while(qntt_ppl_value !=1){
		puts("Digite o numero de pessoas que deseja cadastrar");
		scanf("%d", &qntt_ppl);
		if(qntt_ppl > 50){
			puts("quantidade invalida, tente outra vez;");
			qntt_ppl_value = qntt_ppl_value - 1;
		}
		qntt_ppl_value = qntt_ppl_value + 1;
	}
	//preenche a matriz com os dados de cada usuario
	puts("por favor preencha a lista de dados sobre cada pessoa");
	for(i=0; i < qntt_ppl; i++){
		for (j=0; j < M; j++){
			if(j == 0){
				printf("[%d][%d]: ", i, j);
			}
			if(j == 1){
				while(cpf_value !=1){
					printf("    %s:", "CPF");
					scanf("%d", ppl.cpf);

					//valida campo cpf
					if(ppl.cpf > 999999999 || ppl.cpf < 100000000){
						puts("cpf invalido, tente novamente");
						cpf_value = cpf_value - 1;
						}
					cpf_value = cpf_value + 1;
				}
				matriz[i][j] = matriz[i][j] + ppl.cpf;
			}
			}
			if(j == 2){
				printf("    %s:", "idade");
				scanf("%d", ppl.idade);
				vetor[i] = vetor[i] + ppl.idade;
				matriz[i][j] = matriz[i][j]+ ppl.idade;
			}

			if(j == 3){
				printf("    %s:", "peso");
				scanf("%f", ppl.peso);
				matriz[i][j] = matriz[i][j] + ppl.peso;
			}
			puts(" ");
		}
	}
	//ordena o vetor de idade
	bubble_sort(vetor[N], ppl.idade);
		
	puts("Estes sao os cadastrados");
	for(i=0; i < qntt_ppl; i++){
		for (j=0; j < M; j++){
			printf("");
}