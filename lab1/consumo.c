/*
Eduardo Freire Mangabeira
github: /edumangabeira

Descrição: [Aula-15-08-2018] - Fazer código que indique quanto uma pessoa deve pagar pela conta
de água no mês, dada a quantidade por metro cúbico que ela utilizou de água. 

Obs: - O valor fixo da conta é 7 reais, independente de quanto se gastou;

	 - Acima de 10 metros cubicos, a taxa passa a ser a quantidade multiplicada por 1 (um) mais o valor prefixado;

	 - Entre 31 e 100 a taxa passa a ser a quantidade multiplicada por 2 (um) mais o valor prefixado;

	 - Acima de 100, a taxa passa a ser a quantidade multiplicada por 5 (um) mais o valor prefixado.

Entrada: Um número inteiro indicando a quantidade de água gasta num mês.

Saída: Um inteiro que retorna a conta a ser paga.

*/


#include<stdio.h>
#include<math.h>

int main(void){
	int taxa, quantidade;
	printf("Digite a quantidade de agua gasta ao longo do mes em metros cubicos: \n\n");
	scan("%d",&quantidade);
	if (quantidade <= 10){

		taxa = 7;
	}else{
		if(quantidade <= 30){

			taxa = quantidade * 1 + 7;

		}else{
			if (quantidade <= 100){

				taxa = quantidade * 2 + 7;

			}else{

				taxa = quantidade * 5 + 7;
			}
		}
	}

	printf("A taxa a pagar eh de %d reais", taxa);

	return 0;
}