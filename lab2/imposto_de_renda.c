/*
Eduardo Freire Mangabeira
github: edumangabeira
Descrição: [18-08-2018]Calcula imposto de renda e alíquota efetiva de um contribuinte baseado na tabela do IR de 2015.

OBS: aliquota efetiva = (valor do imposto incidente) / (renda tributável do contribuinte).
 ________________________________________
|Base de calculo (R$)  	  | Alíquota (%) |
|-------------------------|--------------|
|Ate 1.903,98 		  | isento       |
|De 1.903,99 ate 2.826,65 |	7,5	 |
|De 2.826,66 ate 3.751,05 |	15	 |
|De 3.751,06 ate 4.664,68 |	22,5	 |
|Acima de 4.664,68	  |	27,5     |
|_________________________|______________| 

Entrada: Renda mensal do contribuinte.
Saída: Imprime os valores do imposto de renda e alíquota efetiva.
*/

#include<stdio.h>
#define BASE_1 1903.98
#define BASE_2 2826.65
#define BASE_3 3751.05
#define BASE_4 4664.68


int main(void){

	float imposto, renda, aliquota;
	float faixa_1,faixa_2, faixa_3, faixa_4;
	
	
	printf("Digite a sua renda atual: \n\n");
	scanf("%f", &renda);
	

	if(renda <= BASE_1){
		imposto = 0;
		aliquota = 0;
	}	

	if((renda > BASE_1) && (renda <= BASE_2)){

		faixa_1 = (renda - BASE_1) * 0.075; // <------- caso não passe disso #1
		imposto = faixa_1;
		
	}

	if((renda > BASE_2) && (renda <= BASE_3)){

		faixa_1 = (BASE_2 - BASE_1) * 0.075;// <--------- caso ultrapasse a primeira condição #1
		faixa_2 = (renda - BASE_2) * 0.15;// <-------- caso não passe disso #2
		imposto = faixa_1 + faixa_2;
		
	}
	
	if((renda > BASE_3) && (renda <= BASE_4)){
		
		faixa_1 = (BASE_2 - BASE_1) * 0.075;
		faixa_2 = (BASE_3 - BASE_2) * 0.15;// <-------------- caso ultrapasse a segunda condição #2
		faixa_3 = (renda - BASE_3)* 0.225;
		imposto = faixa_1 + faixa_2 + faixa_3;
	}
	
	if(renda > BASE_4){

		faixa_1 = (BASE_2 - BASE_1) * 0.075;
		faixa_2 = (BASE_3 - BASE_2) * 0.15;
		faixa_3 = (BASE_4 - BASE_3)* 0.225;
		faixa_4 = (renda - BASE_4) * 0.275;
		imposto = faixa_1 + faixa_2 + faixa_3 + faixa_4;
	}
	

	if(imposto != 0){

		aliquota = imposto/renda * 100;

	}

	printf("\nimposto:%.2f\t aliquota:%.2f\t\n", imposto, aliquota);
	return 0;

	
}
