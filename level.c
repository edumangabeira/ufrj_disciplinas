/*
Eduardo Freire Mangabeira
Data: [16/10/2018]
*/
#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
#include<time.h>
#define N 9

int fulfill_matrix(char matriz[][N]){
	int i, j;
	for (i=0; i<gamemode; i++){
		for(j=0; j<gamemode; j++){
			matriz[i][j] = ' ';
		}
	}
	return matriz[gamemode][gamemode];
}

void grid_display(char matriz[][N], int i, int j){

	puts("| %d |", matriz[i][j]);
	puts(" ____ ");
}

void classic_bot_of_doom(int gamemode, int p_horiz_circulo, int p_vert_circulo){
	
	srand (time(NULL));
	//if(matriz[i][j] == '/0') 
	p_horiz_circulo = rand() % gamemode;
	p_vert_circulo = rand() % gamemode;
 }

void classic_velha(char matriz[][N], int gamemode, int cpu_or_player){

	int i, j,
		diagonal1_w = 0, diagonal1_k = 0,
		diagonal2_w = 0, diagonal2_k = 0,
		horizontal_w, horizontal_k,
		vertical_w, vertical_k,
		ganha_x = 0, ganha_o = 0,
		p_vert_xis,p_vert_circulo,
		p_horiz_xis, p_horiz_circulo;		
	bool diagonal_2 = ((i==1) && (j==3) || (i==2 && j==2) || (i=3 && j==1));

	matriz[gamemode][gamemode] = fulfill_matrix_zero(matriz[gamemode][gamemode]);  

	for (i=0; i < gamemode; i++){
		horizontal_w = 0, horizontal_k = 0;
		vertical_w = 0, vertical_k = 0;
		for(j=0; j < gamemode; j++){
			switch(cpu_or_player){
				case 1:
						grid_display(matriz[gamemode][gamemode], i, j);
						puts("Jogador 1, onde deseja colocar o xis - (X) ?");
						puts("digite a posicao horizontal e vertical, respectivamente:\n
							(exemplo '11', '25', 53");
						scanf("%d%d", &p_horiz_xis, &p_vert_xis);
						if(matriz[p_horiz_xis][p_vert_xis] == ' '){
							matriz[p_horiz_xis][p_vert_xis] = 'x';
						}else{
							printf("posicao ja ocupada, tente escolher outra ou perca a vez: \n");
							scanf("%d%d", &p_horiz_xis, &p_vert_xis);
						}
						grid_display(matriz[gamemode][gamemode], i, j);
						puts("Jogador 2, onde deseja colocar o circulo - (O) ?");
						puts("digite a posicao horizontal e vertical, respectivamente:\n
							(exemplo '11', '25', 53");
						scanf("%d%d", &p_horiz_circulo, &p_vert_circulo);
						if(matriz[p_horiz_circulo][p_vert_circulo] == ' '){
							matriz[p_horiz_circulo][p_vert_circulo] = 'o';
							
						}else{
							printf("posicao ja ocupada, tente escolher outra ou perca a vez: \n");
							scanf("%d%d", &p_horiz_circulo, &p_vert_circulo);
						}
				break;
				case 2:
					    grid_display(matriz[gamemode][gamemode], i, j);
						puts("Jogador 1, onde deseja colocar o xis - (X) ?");
						puts("digite a posicao horizontal e vertical, respectivamente:\n
							(exemplo '11', '25', 53");
						scanf("%d%d", &p_horiz_xis, &p_vert_xis);
						if(matriz[p_horiz_xis][p_vert_xis] == ' '){
							matriz[p_horiz_xis][p_vert_xis] = 'x';
						//if(matriz[i][j] == '\0'){//ta errado, em vez de i e j tem que ter as posicoes	
						}else{
							printf("posicao ja ocupada, tente escolher outra ou perca a vez: \n");
							scanf("%d%d", &p_horiz_xis, &p_vert_xis);
						}
						grid_display(matriz[gamemode][gamemode], i, j);
						bot_of_doom(gamemode, p_horiz_circulo, p_vert_circulo);
						if(matriz[p_horiz_circulo][p_vert_circulo] == ' '){
							matriz[p_horiz_circulo][p_vert_circulo] = 'o';
							
						}else{
							bot_of_doom(gamemode, p_horiz_circulo, p_vert_circulo);
						}

				break;
			}
			//percorre diagonal 1
			if((i==j) && (matriz[i][j] == 'x')){
				diagonal1_w = diagonal1_w + 1;
				if(diagonal1_w == 3){
					ganha_x = 1;
					break;
				}
			}else{

				if((i==j) && (matriz[i][j] == 'o')){
					diagonal1_k = diagonal1_k + 1;
					if(diagonal1_k == 3){
						ganha_o = 1;
						break;
					}
				}
			}
			//percorre diagonal 2
			if((diagonal_2) && (matriz[i][j] == 'x')){
				diagonal2_w = diagonal2_w + 1;
				if(diagonal2_w == 3){
					ganha_x = 1;
					break;
				}
			}else{
				if((diagonal_2) && (matriz[i][j] == 'o')){
					diagonal2_k = diagonal2_k + 1;
					if(diagonal2_k == 3){
						ganha_o = 1;
						break;
					}
				}
			}
			//percorre horizontais
			if(matriz[i][j] == 'x'){
				horizontal_w = horizontal_w + 1;
				if(horizontal_w == 3){
					ganha_x = 1;
					break;
				}
			}else{

				if(matriz[i][j] == 'o'){
					horizontal_k = horizontal_k + 1;
					if(horizontal_k == 3){
						ganha_o = 1;
						break;
					}
				}
			}
			//percorre verticais
			if(matriz[j][i] == 'x'){
				vertical_w = vertical_w + 1;
				if(vertical_w == 3){
					ganha_x = 1;
					break;
				}
			}else{

				if(matriz[j][i] == 'o'){
					vertical_k = vertical_k + 1;
					if(vertical_k == 3){
						ganha_o = 1;
						break;
					}
				}
			}
			if(ganha_x == 1){
				puts("jogador __x__ venceu");
			}else{
				if(ganha_o == 1){
					puts("jogador __o__ venceu");
				}else{
					puts("Deu velha !!! ლ(ಠ_ಠლ) (╯°□°）╯︵ ┻━┻");
				}
			}
		}
	}
}
