/*
Eduardo Freire Mangabeira
Victoria de Andrade Azevedo
Data de inicio: [16/10/2018]
Data de conclusao: [17/11/2018]
Descricao: Jogo da velha personalizado
Entrada: Contra quem o usuario deseja jogar e tamanho do tabuleiro.
Saída: Jogo completo
*/
#include<stdlib.h>
#include<stdio.h>
#include<time.h>
#include "level.h"
#define N 9
#define M 2

int main(void){
	int cpu_or_player,		//guarda valor do tipo de jogador a se enfrentar
		check_mode = 0,		//para checar se tipo de jogador a se enfrentar eh valido
		valid_player = 0, 	//para checar se modo de jogo eh valido
		gamemode;			//tamanho de uma dimensao do tabuleiro
		
	//char again;			//guarda a resposta do jogador caso ele queira jogar outra partida
	char matriz[N][N];	//tabuleiro do jogo

	//while(1){ 
		//define o jogador a se enfrentar e checa se o valor eh valido
		puts("\n\n\tPREPARE-SE PARA O JOGO DA VELHA MAIS INCRIVEL DE TODOS\n\n");
		do{
			puts("Deseja enfrentar outro jogador ou a nossa poderosa inteligencia articifial?? (◣_◢)\n\n\tDIGITE 1 para se juntar a outro jogador ou\n\tDIGITE 2 para aceitar o seu destino tragico ヽ༼ຈل͜ຈ༽ﾉ\n");
			scanf("%d", &cpu_or_player);

			if(cpu_or_player == 1){
				puts("A-haaaa, sabia que eras covarde ( ͡° ͜ʖ ͡°)\n\n");
				}else{
					if(cpu_or_player == 2){
						puts("\tIra se arrepender, humano... (☞⌐■_■)☞\n\n");
					}else{
						puts("Valor invalido. Amigo, sei que voce eh mais esperto que isso. Quer jogar com a maquina ou outro humano?");
						valid_player = valid_player - 1;
					}
				}
			valid_player = valid_player + 1;
		
		}while(valid_player <= 0);

		//define o modo de jogo e checa se ele eh valido
		do{
			printf("Qual modo de jogo deseja iniciar?\n\t3 - classico\n\t4 - 4x4\n\t5 - 5x5\n\t6 - 6x6\n\t7 - 7x7\n\t8 - 8x8\n\t9 - 9x9");
			scanf("%d",&gamemode);
			switch(gamemode){
				case 3 ... 9: puts("\t\tO jogo se inicia!!!!!!!!!!! (ง •̀_•́)ง ผ(•̀_•́ผ) ");
							  jogo_da_velha(matriz, gamemode, cpu_or_player);
				break;

				default: puts("modo invalido, tente novamente ƪ(‾ε‾“)ʃ");
				check_mode = check_mode - 1;
				break;
				}
			check_mode = check_mode + 1;
		
		}while(check_mode <= 0);

		/*printf("Deseja jogar novamente?\n\n\t s- sim | n - nao\n\n");
		scanf("%c",&again);
		if(again != 's')
			break;
	}*/
	return 0;
}