/* 1- Escreva um programa que receba um numero inteiro como entrada e imprima na tela
esse numero. ´
2- Escreva um programa que receba dois numeros inteiros como entrada e imprima na ´
tela a multiplicacao desses dois numeros. ´
3- Escreva um programa que receba dois numeros reais como entrada e imprima na tela
a soma desses dois numeros. */

/*
Eduardo Freire Mangabeira
Descrição: Exercícios da lista0, do 1 ao 3. Achei interessante agregar os conhecimentos
em funções vistos nas aulas 7 e 8, apenas por questões de aprendizado.
*/

#include<stdio.h>
void recebe_imprime(void);
void multiplica(void);
void soma(void);


//Entrada: um inteiro
//Saida: o inteiro escolhido
void recebe_imprime(void){

	int a;
	printf("Digite um inteiro\n\n");
	scanf("%d",&a);
	printf("O numero escolhido foi: %d \n\n", a);
	return;
}

//Entrada: dois inteiros
//Saida: um inteiro com o valor da multiplicação das duas entradas
void multiplica(void){

	int a, b;
	printf("Digite um inteiro:\n\n");
	scanf("%d",&a);
	printf("Digite o proximo inteiro:\n\n");
	scanf("%d",&b);
	printf("%d x %d = %d\n\n", a, b, a * b);
	return;
}

//Entrada: dois inteiros
//Saida: um inteiro com o valor da soma das duas entradas
void soma(void){

	int a, b;
	printf("Digite um inteiro:\n\n");
	scanf("%d",&a);
	printf("Digite o proximo inteiro:\n\n");
	scanf("%d",&b);
	printf("%d + %d = %d\n\n", a, b, a + b);
	return;
}

int main(){

	recebe_imprime();
	soma();
	multiplica();		
	return 0;
}
