/*
Eduardo Freire Mangabeira
Data:26/10/2018
github: /edumangabeira
descrição: primeira atividade do lab 8

Entrada: quantidade de questoes da prova, gabarito da prova e resposta do aluno
Saida: nota do aluno
*/

#include<stdio.h>
#include<stdlib.h>

int main(void){

int questoes;
int i, nota;
char *gabarito, *aluno;

puts("quantas questoes tem a prova?\n");
scanf("\t%d", &questoes);

gabarito = malloc(sizeof(char)*questoes);
puts("digite o gabarito da prova, em letras maiusculas, sem separar por espacos\n");
scanf("\t\t%s", gabarito);

aluno = malloc(sizeof(char)*questoes);
puts("digite as respostas do aluno, em letras maiusculas, sem separar por espacos\n");
scanf("\t\t%s", aluno);

for(i=0; i<questoes; i++){
	if(gabarito[i] == aluno[i]){
		nota++;
	}
}
printf("\n\n\tA NOTA DO ALUNO FOI:  %d ", nota);

free(aluno);
free(gabarito);


return 0;
}