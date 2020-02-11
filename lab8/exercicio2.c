/*
Eduardo Freire Mangabeira
Data:26/10/2018
github: /edumangabeira
descrição: segunda atividade do lab 8

Entrada: nome e notas de um aluno
Saida: escreve os dados de entrada num arquivo
*/

#include<stdio.h>
#include<stdlib.h>
#define num_alunos 5
int main(void){

	char *nome;
	float nota1, nota2;
	int i = 0;
	FILE *arq;

	nome = malloc(sizeof(char)*num_alunos);

	while(i<5){
		puts("qual o nome do aluno?\n");
		scanf("\t%s", nome);
		puts("digite as notas dele separadas por espacos");
		scanf("%f %f", &nota1, &nota2);

		arq = fopen("notas.txt", "a");
		fprintf(arq,"%s\n%.2f\n%.2f\n",nome,nota1, nota2);
		i++;
	}

return 0;
}