/*
Eduardo Freire Mangabeira
Data: [16/10/2018]
*/
#include<stdio.h>
#include<stdlib.h>
#include "level.h"
#include "mode.h"
#define N 9

int main(void){
	int check_level = 0,
		check_mode = 0, 
		nivel = 2,
		gamemode = 3;

	int matriz[N][N];
	char again;
	//float mat[N][M];
	//fwrite(mat, sizeof(float), N*M, arq); 

	while(1){
		printf("Qual modo de jogo?
			    \n\t3 - classico
				\n\t4 - 4x4
				\n\t5 - 5x5
				\n\t6 - 6x6
				\n\t7 - 7x7
				\n\t8 - 8x8
				\n\t9 - 9x9
				");
		scanf("%d",&gamemode);
		do{
		switch(gamemode){
			case 3: mode.classic_velha();
			break;

			case 4,5,6,7,8,9: mode.custom_velha();
			break;

			default: print("modo invalido, tente novamente");
			check_mode = check_mode - 1;
			break;
		}
		check_mode = check_mode + 1;
		while(check_mode <= 0)
		}
			    

		printf("Selecione a dificuldade do jogo:
				\n\t1 - facil
				\n\t2 - normal
				\n\t3 - dificil");
		scanf("%d",&nivel);
		do{
		switch(level){
			case 1: level.easy();
			break;

			case 2: level.medium();
			break;

			case 3: level.hard();
			break;

			default: print("nivel invalido, tente novamente");
			check_level = check_level - 1;
			break;
		}
		check_level = check_level + 1;
		while(check <= 0)
		}

		fulfill_matrix(matriz[gamemode][gamemode]);
		search_matrix(matriz[gamemode][gamemode], gamemode);

		puts("O jogo se inicia!!!!!!!!!!!");

		printf("Deseja jogar novamente?\n\n\t s- sim | n - nao");
		scanf("%c",&again);
		if(again != 's'){
			break;
		}
	}
}
