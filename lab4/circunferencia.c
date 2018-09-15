/*
Eduardo Freire Mangabeira
Descrição: Primeira atividade

Implemente o TAD tCirculo representando um cırculo com as seguintes operacoes: 
(a) Inicializacao de cırculo com raio unitario e centro na origem do eixo de coordenadas; 
(b) Inicializacao com leitura de raio e centro do cırculo;
(c) Alteracao do raio do cırculo;
(d) Alteracao do centro do cırculo;
(e) Calculo da area do cırculo; e
(f) Verificacao se um ponto esta no interior do cırculo ou fora do cırculo.

Data: [14/09/2018]
Entrada: Raio, centro do circulo e ponto no plano.
Saída: Area do circulo e se um ponto pertence ou nao ao circulo.
*/

#include<stdio.h>
#include<math.h>
#include<conio.h>
#define PI 3.14

struct T_Circulo{
	int raio;
	int x_0 , y_0;
};

int main(void){

	struct T_Circulo cr, circulo;
	int x_1, y_1, distancia,
	    escolha, tecla;
	float area;

	puts("Ola aluno! Alguns circulos podem possuir algumas propriedades especiais! \n");
	puts("O circulo cujo raio vale zero e seu centro se encontra no ponto(0,0) - origem - eh um otimo exemplo!\n");
	puts("Para o proximo exercicio, voce deve digitar o raio de um circulo a sua escolha,\n");
	puts("lembrando que estaremos usando apenas numeros inteiros por enquanto. Escolha\n");
	puts("tambem qual sera o centro do circulo definido por (x,y). Para finalizar,\n ");
	puts("escreva um ponto qualquer no plano e te direi se pertence ou nao ao circulo.\n");
	puts("Bons estudos!\n\n\n\n");
	printf("Pressione [ENTER] para continuar...\n\n");

	tecla = getch();
	while(1){

		if(tecla == 13){	//#13 eh o numero referente a tecla enter
			break;
		}else{
			printf("%d", tecla);
			tecla = getch();
		}
	}
	puts("Primeiro forme seu circulo; \n\n");
    puts("1- Digite '1' e pressione [ENTER] caso queira formar seu\n");
    puts("proprio circulo, entrando com raio,  abscissa e ordenada.\n");
	puts("2 -Digite '2' e pressione [ENTER] caso queira\n");
	puts("usar o circulo de raio unitario e coordenadas na origem.\n\n");
   
	scanf("%d", &escolha);

	if (escolha == 1){

		printf("Raio: \n");	
		scanf("%d", &cr.raio);
		printf("Abscissa(eixo x): \n\n");	
		scanf("%d", &cr.x_0);
		printf("Ordenada (eixo y): \n\n");	
		scanf("%d", &cr.y_0);
		
	}else{
		cr.raio = 1;
		cr.x_0 = 0;
		cr.y_0 = 0;
	}

	circulo = cr;
	area = PI * circulo.raio;

	printf("\n\nO circulo que voce construiu tem area = %.2f\n\n\n", area);
	puts("A seguir digite as coordenadas de um ponto qualquer no plano, se estiver\n");
	puts("contido no circulo formado, eu te avisarei.\n\n");
	printf("abscissa(eixo x)\n\n:");
	scanf("%d", &x_1);
	printf("Ordenada (eixo y):\n\n");
	scanf("%d", &y_1);

	distancia = sqrt(pow((x_1 - circulo.x_0),2) + pow((y_1 - circulo.y_0),2));
	if(distancia > circulo.raio){
		puts("\nO ponto escolhido NAO pertence ao circulo!!!\n\n");

	}else{
		puts("\nO ponto escolhido PERTENCE ao circulo!!!\n\n");
	}

	return 0;
}
