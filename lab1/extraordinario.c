/*
Eduardo Freire Mangabeira
github: /edumangabeira

Descrição: [Aula-15-08-2018] - Escreva um programa que diga se um dado número é extraordinário ou não.

obs: Um número é extraordinário quando a soma de seus algarismos elevados à potência de 3 resulta no próprio número
	 (válido apenas para números de três dígitos)

Entrada: Um número inteiro entre 100 e 999.

Saída: Indica se o número fornecido é extraordinário.
*/


#include<stdio.h>
#include<math.h>
int main(void){
	int centena, dezena, unidade;
	int numero;
	printf("Digite o numero e confira se ele eh de fato extraordinario: \t \n\n");
	scanf("%d", &numero);

	centena = numero / 100;
	dezena = numero % 100;
	unidade = dezena % 10;

	extraordinario = pow(centena,3) + pow(dezena,3) + pow(unidade,3);

	if (numero == extraordinario){
		
		printf("SIM, %d eh um numero extraordinario", numero);

	}else{

		printf("NAO, %d nao eh um numero extraordinario", numero );
	}	
}