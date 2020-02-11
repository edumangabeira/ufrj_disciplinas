/*4- Escreva um programa que receba como entrada um ano anterior a 2018 e imprima na
tela quantos anos as pessoas que nasceram no ano informado completam em 2018*/

/*
Eduardo Freire Mangabeira
Descrição: exercicio 4 da lista 0, decidi aumentar um pouco o exercício para determinar
também a idade atual de uma pessoa dado um mês do ano.
Entrada: Um ano anterior a 2018
Saída: A idade que alguem completa no ano de 2018
*/

#include <stdio.h>
int main(void){

	int idade,
		mes_atual,
		mes_nascimento, ano_nascimento;

	printf("Digite sua data de nascimento: 'ano/mes'\n\n");
	scanf("%d / %d",&ano_nascimento,&mes_nascimento);
	idade = 2018 - ano_nascimento;
	printf("vc completa esse ano: %d  anos\n\n", idade);

	printf("diga o mês atual em numeros:\n\n");
	scanf("%d", &mes_atual);

	if (mes_atual < mes_nascimento){
		idade = 2018 - ano_nascimento - 1;

	}else{

		idade = 2018 - ano_nascimento;
	}

	printf("A sua idade atual eh: %d \n\n", idade);

	return 0;

}