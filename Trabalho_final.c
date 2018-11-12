/*
Eduardo Freire Mangabeira
Data: [16/10/2018]
*/
#include<stdio.h>
#include<stdlib.h>
#include "level.h"
#define N 9

int main(void){
	int check_mode = 0, 
		gamemode = 3,
		cpu_or_player,
		valid_player = 1;
	char again, 
	matriz[N][N];//matriz do jogo

	while(1){ 
		//define o jogador a se enfrentar e checa se o valor eh valido
		do{
			puts("deseja enfrentar outro jogador ou a nossa poderosa inteligencia articifial?? (◣_◢)\n\n
				  \tDIGITE 1 para se juntar a outro jogador ou\n 
				  \tDIGITE 2 para aceitar o seu destino tragico ヽ༼ຈل͜ຈ༽ﾉ\n");
			scanf("%d", &cpu_or_player);

			if(cpu_or_player == 1){
				printf("a-haaaa, sabia que eras covarde ( ͡° ͜ʖ ͡°)");
				}else{
					if(cpu_or_player == 2){
						puts("ira se arrepender, humano... (☞⌐■_■)☞");
					}else{
						puts("Valor invalido. Amigo, sei que voce eh mais esperto que isso. Quer jogar com a maquina ou outro humano?");
						valid_player = valid_player - 1;
					}
				}
			valid_player = valid_player + 1;
		while(valid_player <= 0)
		}

		//define o modo de jogo e checa se ele eh valido
		do{
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
			switch(gamemode){
				case 3: puts("\t\tO jogo se inicia!!!!!!!!!!! (ง •̀_•́)ง ผ(•̀_•́ผ) ");
						level.classic_velha(matriz[gamemode][gamemode],cpu_or_player);
				break;

				case 4,5,6,7,8,9: puts("\t\tO jogo se inicia!!!!!!!!!!! (ง •̀_•́)ง ผ(•̀_•́ผ) ");
				                  level.custom_velha();
				break;

				default: print("modo invalido, tente novamente ƪ(‾ε‾“)ʃ");
				check_mode = check_mode - 1;
				break;
				}
			check_mode = check_mode + 1;
		while(check_mode <= 0)
		}
		printf("Deseja jogar novamente?\n\n\t s- sim | n - nao");
		scanf("%c",&again);
		if(again != 's'){
			break;
		}
	}
	return 0;
}
