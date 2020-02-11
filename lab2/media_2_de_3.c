/*
Eduardo Freire Mangabeira
github: /edumangabeira
Descrição: [17/08/2018] - Receba três notas de um aluno e faça a média das duas maiores notas.
Entrada: Três números inteiros(notas).
Saída: A média do aluno.
*/
#include<stdio.h>
int main(void){

	float n1, n2, n3;
	float media;
	printf("digite as tres notas\n:");
	scanf("%f%f%f", &n1,&n2,&n3);

	if(((n1 < n3) && (n2 > n3)) || (n2 == n3)){

		media = (n1 + n2) / 2;

	}else{
		if(((n2 > n1) && (n3 > n1)) || (n1 == n3)){

			media = (n1 + n3) / 2;

		}else{
			if(((n1 > n2) && (n3 > n2)) || (n1 == n2)){
				media = (n1 + n3) / 2;

		}
				
	     }
	}
			
	 
	printf("a media do aluno eh %.2f",media);
	return 0;

}
