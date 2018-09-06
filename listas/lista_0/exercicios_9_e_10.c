/*9-
Escreva um programa que receba um caracter e verifique se esse caracter aparece
no seu primeiro nome ou nao. O programa devera imprimir na tela sim, caso o caracter
apareca no seu nome, e nao caso contrario.
10-
Escreva um programa que receba 10 numeros e imprima na tela o menor deles */

/*
Eduardo Freire Mangabeira
Descrição: Exercícios 9 e 10 da lista 0.
*/

#include<stdio.h>
void primeiro_char(void);
void menor(void);

void primeiro_char(void){
	
	char primeiro_nome[30];
	char letra;

	printf("digite seu primeiro nome:\n\n");
	scanf("%s",primeiro_nome);

	printf("digite uma letra do alfabeto:\n\n");
	scanf(" %c",&letra);

	if (letra == primeiro_nome[0]){
		printf("sim, eh sua inicial\n\n");
	}else{
		printf("nao, nao eh sua inicial\n\n");
	}
}

void menor(void){

	int menor, numero,
		i = 1;

	printf("digite um numero por favor:\n\n");
	scanf("%d",&numero);
	menor = numero;

	while(i < 10){
		printf("digite um numero por favor:\n\n");
		scanf("%d",&numero);
		if (numero < menor){
			menor = numero;
		}
		i = i + 1;
	}

	printf("o menor numero eh %d\n\n", menor);
}

int main (void){

	primeiro_char();
	menor();
	return 0;
}