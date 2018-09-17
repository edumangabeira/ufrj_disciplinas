/*
Eduardo Freire Mangabeira
Descrição: Segunda atividade

Roteiro:
1. Defina o novo tipo e declare a lista de operacoes em um arquivo .h.
2. Implemente as funcoes em um arquivo .c.
3. Crie uma aplicacao exemplo para testar todas as operacoes do novo TAD.

1. Escreva uma funcao comparaTempo(tTempo t1, tTempo t2) que compara
dois tempos gastos para a execucao de uma tarefa e retorne: ˜
• -1 se t1 < t2
• 0 se t1 == t2
• 1 se t1 > t2

2. Escreva um programa que leia o tempo gasto em 5 tarefas e imprima qual foi o
maior tempo.

Data: [14/09/2018]
Entrada:
Saída:
*/

//Não gostei dessa implementação, vou tentar fazer novamente mais tarde.
#include<stdio.h>
#include<conio.h>
#include"ed_operations.h"

int main(void){

	Tempo tempo,t_1,t_2;
	int i = 1, j = 1, k = 0, linha;		//contadores
	int t_sub, sub_t1, sub_t2;			//subtracao
	int maior, id_maior; 				//comparacoes
	int tecla, tarefa[5];				//utilitarios

	puts("O programa diz a diferenca entre o tempo levado para realizar a mesma tarefa em momentos distintos.\n");
	puts("Voce, usuario, deve informar o horario no seguinte formato: HORAS/MINUTOS/SEGUNDOS\n\n\n");
	printf("Pressione [ENTER] para continuar...\n\n");

	tecla = getch();
	while(1){

		if(tecla == 13){	
			break;
		}else{
			printf("%d", tecla);
			tecla = getch();
		}
	}

	while(i >= 5){
		while(j >= 2){
			printf("Digite o tempo gasto para realizar a tarefa %d pela %d vez\n\n\n\n", i , j);
			scanf("%d", &tempo.hora);
			puts("/");
			scanf("%d",	&tempo.minuto);
			puts("/");
			scanf("%d",	&tempo.segundo);

			if(j == 1){
				t_1 = tempo;
			}else{
				t_2 = tempo;
			}
			j = j + 1;
		}
		
		sub_t1 = t_1.hora*3600 + t_1.minuto*60 + t_1.segundo;
		sub_t2 = t_2.hora*3600 + t_2.minuto*60 + t_2.segundo;

		if(compara_tempo(t_1,t_2) == 1){
			t_sub = sub_t1 - sub_t2;
		}else{
			t_sub = sub_t2 - sub_t1;
		}
			tarefa[k] = t_sub;
			i= i + 1;
			k = k + 1;
	}

	maior = tarefa[0];
	for(k=0;k<5;k++){

		if (tarefa[k] > maior){
			maior = tarefa[k];
			id_maior = k;
		}
	}

	for(linha = 0; linha < 25; linha ++){
		printf("-");
	}
	puts("\n\n\n");
	printf("A tarefa de numero %d foi a que teve a maior discrepancia entre suas realizacoes",id_maior);
	puts("\n\n\n");
	for(linha = 0; linha < 25; linha ++){
		printf("-");
	}
	puts("\n\n\n\n\n");

	return 0;
}
