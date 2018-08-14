/*
Eduardo Freire Mangabeira
github:/edumangabeira
Descrição:[10-Ago-2018] URI: urionlinejudge.com - Escrever código que determine a duração de um jogo qualquer.

Obs: O jogo tem duração mínima de um (1) minuto e duração máxima de 24 horas.

Entrada: Quatro números inteiros representando a hora de início e fim do jogo.

Saída: Mostra a seguinte mensagem: “O JOGO DUROU XXX HORA(S) E YYY MINUTO(S)” .
*/

#include<stdio.h>
#include<stdlib.h>
int main(void){

	int horas_inicio, minutos_inicio, horas_fim, minutos_fim;
	int duracao_min_inicio, duracao_min_fim, duracao_min_total, soma_min;

	printf("Digite a hora em que o jogo comecou(horas e minutos separados por espaco):\n\t");
	scanf("%d %d",&horas_inicio, &minutos_inicio);
	printf("Digite a hora em que o jogo terminou(horas e minutos separados por espaco):\n\t");
	scanf("%d %d",&horas_fim, &minutos_fim);
	
	duracao_min_inicio = horas_inicio * 60 + minutos_inicio;
	duracao_min_fim = horas_fim * 60 + minutos_fim;

	soma_min = (24 * 60 + duracao_min_fim);
	duracao_min_total = soma_min - duracao_min_inicio;

	if(duracao_min_total < 24 * 60 && duracao_min_total > 1){

		printf("\t\n\nO JOGO DUROU %d HORA(S) E %d MINUTO(S)", duracao_min_total / 60, duracao_min_total % 60);

	}else{

		if(duracao_min_total > 24 * 60){

			printf("Tempo limite excedido ou nao atingido(maximo = 24 horas, minimo = 1 minuto)");

		}else{ 

			printf("Tempo limite excedido ou nao atingido(maximo = 24 horas minimo = 1 minuto)");


		}
		
		return 0;
		system("pause");

	}
















}
