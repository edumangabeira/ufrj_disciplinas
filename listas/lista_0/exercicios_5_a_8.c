/*5- Escreva um programa que receba como entrada o raio de um c´ırculo e calcule a sua
area. Crie uma constante para armazenar o valor de PI como 3,14. ´
6- Escreva um progama que receba um numero, verifique se ele ´ e´ par ou ´ımpar e exiba
o resultado na tela.
7- Escreva um programa que receba dois numeros e verifique se eles s ´ ao˜ iguais, se o
primeiro e maior que o segundo ´ ou se o segundo e maior que o primeiro ´ . Imprima na
tela o resultado obtido.
8- Escreva um programa que exiba na tela a tabuada de 2 a 5. */

/*

Eduardo Freire Mangabeira
Descrição: Exercicios 5 a 8 da lista 0. Decidi agrupá-los em funções matemáticas.

*/

#include<stdio.h>
#define pi 3.14
void area_circulo(void);
void par_impar(void);
void igual_maiorque(void);
void tabuada(void);

//calcula a area de um circulo dado um raio fornecido pelo usuario
void area_circulo(void){

	float raio, area;
	printf("digite o raio do circulo\n\n");
	scanf("%f",&raio);
	area = pi * raio;
	printf("a area do circulo eh de: %.2f\n\n", area);
}

//determina se um numero selecionado eh par ou impar
void par_impar(void){

	int numero;
	printf("digite um numero inteiro\n\n");
	scanf("%d", &numero);

	if (numero%2 == 0){
		printf("%d eh par\n\n", numero);
	}else{
		printf("%d eh impar\n\n", numero);
	}
}

//verifica a relação lógica entre dois números
void igual_maiorque(void){
	int n1, n2;

	printf("digite os dois numeros separados por espaco:\n \n");
	scanf("%d %d", &n1, &n2);
	if (n1 > n2){
		printf("%d eh maior que %d\n\n", n1, n2);

	}else{

		if(n2 > n1){
			printf("%d eh maior que %d\n\n", n2, n1);
		}else{
			printf("%d eh igual a %d\n\n", n2,n1);
		}
	}
}

//exibe a tabuada de um numero escolhido pelo usuario
void tabuada(void){
	
	int multi, tamanho, 
		aux;

	printf("deseja ver a tabuada de qual numero inteiro de 1 a 10?\n\n");
	scanf("%d",&tamanho);
	aux = 1;

	while(aux <= 10){

		multi = aux * tamanho;
		printf("%d x %d = %d\n\n", aux, tamanho , multi);
		aux = aux + 1;
	}

}

int main (void){

	area_circulo();
	par_impar();
	igual_maiorque();
	tabuada();

	return 0;
}