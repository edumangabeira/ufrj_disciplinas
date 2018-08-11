/*
Eduardo Freire Mangabeira
github:/edumangabeira

Descrição:[10-Ago-2018] lab 1: praticando aulas teóricas da primeira semana.

	temas abordados:
	- atribuindo tipos e valores a variáveis.
	- recebendo e imprimindo valores.
	- expressões lógicas.

Entrada: recebe 3 números inteiros.

Saída: devolve o maior entre os 3 números.

*/

#include<stdio.h>

int main(void){
	//dicionario de dados
	int a, b, c;
	int maior;
	char repete = 's';

	while(1){
		//obtem os tres numeros
		printf("digite tres numeros, separando-os por espaços:\t\n\n");
		scanf("%d %d %d",&a, &b, &c);

		//encontra o maior numero
		if(a > b){
			maior = a;
			
		}else{
			maior = b;
		}

		if(c > maior){
			maior = c;
		}

		printf("este eh o maior --> %d\n", maior);

		printf("deseja escolher mais 3 numeros? s-sim, n-nao \n");
		scanf("%s", &repete);

		if(repete == 'n'){
			break;
		}
	}

	return 0;
}
		
	
