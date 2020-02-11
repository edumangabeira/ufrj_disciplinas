
/*
Eduardo Freire Mangabeira
github: /edumangabeira
Descrição:[24-08-2018]-Programa que pede 10 vezes um número ao usuário e retorna se ele é ímpar ou par.
Entrada: Um número inteiro.
Saída: Aponta se o número é par ou ímpar.

*/

#include <stdio.h>
int main() {
	//dicionario de dados
	int n; //armazena os valores de entrada
	int i = 1; //variavel auxiliar
	do {
		//le um numero do teclado
		scanf("%d", &n);

		i = i + 1;

		while (n < 0){
			printf("digite um inteiro positivo, por favor\n\n");
			scanf("%d",&n);
			continue;
		}
		//verifica se o numero eh par ou impar
		if ((n % 2) == 0) {
			printf("%d eh par\n", n);

		} else {
			printf("%d eh ımpar\n", n);
		}

	} while(i<=10);
return 0;
}
