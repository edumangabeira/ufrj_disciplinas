/*
Eduardo Freire Mangabeira
github: edumangabeira

Descrição: Calcula imposto de renda e alíquota efetiva.

Entrada: Renda mensal do contribuinte.

Saída: Imprime os valores do imposto de renda e alíquota efetiva.

*/

#include<stdio.h>
#define BASE_1 1903.98
#define BASE_2 2826.65
#define BASE_3 3751.05
#define BASE_4 4664.68

int main(void){

	float imposto, renda_total, renda, aliquota;
	float taxa_1, taxa_2, taxa_3;
	float renda_t1, renda_t2, renda_t3, renda_t4;

	taxa_1 =  BASE_2 - BASE_1;
	taxa_2 =  BASE_3 - BASE_2;
	taxa_3 =  BASE_4 - BASE_3;
	
	scanf("%f", &renda);
	if(renda <= BASE_1){
	
		imposto = 0;
		aliquota = 0;
	 
	}

	if((renda > BASE_1) && (renda <= BASE_2)){

		imposto = BASE_1 * 0.075;
		renda_t1 = renda_total - imposto;
		renda = renda_t1;
		
	}

	if((renda > BASE_2) && (renda <= BASE_3)){

		imposto = taxa_1 * 0.15;
		renda_t2  = renda_t1 - imposto;
		renda = renda_t2;

	}

	if((renda > BASE_3) && (renda <= BASE_4){

		imposto = taxa_2 * 0.225;
		renda_t3 = renda_t2 - imposto;
		renda = renda t3;
	}

	if((renda > BASE_4){

		imposto = taxa_3 * 0.275;
		renda_t4 = rend_t3 - imposto;
		renda= renda_t4;
	}

	renda/renda_total = aliquota

	printf("\nimposto:%.2f\t aliquota:%.2f\t\n", renda, aliquota);
	return 0;

	
}
