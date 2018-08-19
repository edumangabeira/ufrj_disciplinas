/*
Eduardo Freire Mangabeira
Descrição: [17/08/2018] - Lê as coordenadas de um ponto (x,y) e retorna o quadrante a qual ele pertence
e indica se o ponto está em algum dos eixos.
Entrada: dois números reais; x e y.
Saída: Posição do ponto no plano.
*/
#include<stdio.h>
int main(void){
	float x, y;
	printf("digite as coordenadas (x,y):\t");
	scanf("%f%f",&x ,&y);

	if((x > 0) && (y > 0)){

		printf ("o ponto esta no primeiro quadrante\n");
	}

	if((x < 0) && (y > 0)){

	        printf ("o ponto esta no segundo quadrante\n");
	}

	if((x < 0) && (y < 0)){

	        printf ("o ponto esta no terceiro quadrante\n");
	}

	if((x > 0) && (y < 0)){

	 	printf ("o ponto esta no quarto quadrante\n");
        }


	if((x == 0) && (y != 0)){

		printf ("o ponto esta no eixo x\n");
	            
	}

	if((x != 0) && (y == 0)){

	        printf ("o ponto esta no eixo y\n");
	}

	if(x == y){

		printf("o ponto está na origem\n");

	}

	return 0;
}