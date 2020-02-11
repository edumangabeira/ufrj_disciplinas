/*
Eduardo Freire Mangabeira
Data:26/10/2018
github: /edumangabeira
descrição: terceira atividade do lab 8
*/

#include<stdio.h>
#include<stdlib.h>
#define num_alunos 5
int main(void){
	char *nome;
	float nota1, nota2, media;
	int i = 0;
	FILE *arq;

	nome = malloc(sizeof(char)*num_alunos);

	arq = fopen("notas.txt", "r");

	if(arq == NULL){
		puts("erro na abertura do arquivo");
		return -1;
	}

	while(i<5){

		fscanf(arq, "%s", nome);
		fscanf(arq, "%f", &nota1);
		fscanf(arq, "%f", &nota2);
		media = (nota1 + nota2)/2;
		printf("a media do aluno %s eh %.2f\n", nome, media);
		i++;
	}
	return 0;
}
