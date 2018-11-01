/*
Eduardo Freire Mangabeira
Data: [16/10/2018]
*/
#include<stdio.h>
#define N 9

int search_matrix(int matriz[][N], int gamemode){
	int i, j;
	int winner;
	for (i=0; i < N; i++){
		for(j=0; j < N; j++){

			if (matriz[i][j]){
				//venceu diagonal 1
				winner = matriz[i][j]];
			}else{
				if(matriz [i][]){
				//venceu diagonal 2 percorrendo ao contrário
					winner = ;
				}else{
					if{
					//venceu N horizontais
						winner = ;
					}else{
						if{
							//venceu N verticais
							winner = ;
						}
					} 
				}
			}
		}
	}
	if (){
		puts("jogador __x__ venceu");
	
	}else{
		puts("jodador __o__ venceu");
	}
}

int fulfill_matrix(int matriz[][N]){
	int i, j;
	int x, o;
	int winner;
	for (i=0; i < N; i++){
		printf(" ");
		for(j=0; j < N; j++){
			printf("\n");

		}
	}

}

void display_game(int matriz[][N], int gamemode){

	int i, j;
	grid_display = gamemode*gamemode;
	for(i=0; i<gamemode;  i++){
		for(j=0; j<gamemode; j++){
		printf("_|");
		printf("");
		}

	}
}

void classic_velha(int matriz[][N], int gamemode, int cpu_or_player){
	int i, j,
		diagonal1_w = 0, diagonal1_k = 0,
		diagonal2_w = 0, diagonal2_k = 0,
		horizontal_w, horizontal_k,
		vertical_w, vertical_k,
		ganha_x = 0, ganha_o = 0,
		p_vert_xis,p_vert_circulo,
		p_horiz_xis, p_horiz_circulo; 

	for (i=0; i < gamemode; i++){
		horizontal_w = 0, horizontal_k = 0;
		vertical_w = 0, vertical_k = 0;
		for(j=0; j < gamemode; j++){
			switch(cpu_or_player){
				case 1:
						grid_display();
						puts("Jogador 1, onde deseja colocar o xis - (X) ?");
						puts("digite a posicao horizontal e vertical, respectivamente:\n
							(exemplo '11', '25', 53");
						if(matriz[i][j] == 0){
							scanf("%d%d", &p_horiz_xis, &p_vert_xis);
						}else{
							printf("posicao ja ocupada, tente escolher outra ou perca a vez: \n");
							scanf("%d%d", &p_horiz_xis, &p_vert_xis);
						}
						grid_display();
						puts("Jogador 2, onde deseja colocar o circulo - (O) ?");
						puts("digite a posicao horizontal e vertical, respectivamente:\n
							(exemplo '11', '25', 53");
						if(matriz[i][j] == 0){
							scanf("%d%d", &p_horiz_xis, &p_vert_xis);
						}else{
							printf("posicao ja ocupada, tente escolher outra ou perca a vez: \n");
							scanf("%d%d", &p_horiz_xis, &p_vert_xis);
						}

						//posiciona o 'X' na matriz
						if(i == p_horiz_xis && j = p_vert_xis){
							matriz[i][j] = 'x';
						}else{
						//posiciona o 'O' na matriz
							if(i == p_horiz_circulo && j = p_vert_circulo){
								matriz[i][j] = 'o';
							}
						}
				break;
				case 2: while()
					    grid_display(); 
						scanf("%d", &matriz[i][j]);
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
			if((((i==1) && (j==3)) || (i==2 && j==2) || (i=3 && j==1)) && (matriz[i][j] == 'x')){
				diagonal2_w = diagonal2_w + 1;
				if(diagonal2_w == 3){
					ganha_x = 1;
					break;
				}
			}else{
				if((((i==1) && (j==3)) || (i==2 && j==2) || (i=3 && j==1)) && (matriz[i][j] == 'o')){
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
				if(vertcial_w == 3){
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


/*
void easy(){
}

void medium(){
}

void hard(){
}

*/