/*
código teste

entrada: pede um inteiro

saída: retorna sequencia de ordem decrescente a partir do inteiro

*/

#include<stdio.h>

int main(void){
	int c = 0;
	printf("Digite a quantidade de termos finitos que deseja: \t\n\n");
	scanf("%d",&c);

	while(1){
		printf("este é o termo de índice %d\n", c);
		c = c - 1;

		if(c < 0){
			break;
		}
	}

	return 0;

}

