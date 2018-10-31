/*
Eduardo Freire Mangabeira
Data: [16/10/2018]
*/
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
	if (bad == 0){
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

void classic_velha(int matriz[][N],int cpu_or_player){
	int i, j,
		diagonal_w = 0, diagonal_k = 0,
		horizontal_w = 0, horizontal_k = 0,
		vertical_w = 0, vertical_k =0,
		ganha_x = 0, ganha_o = 0;

	for (i=0; i < N; i++){
		for(j=0; j < N; j++){

			switch(cpu_or_player){
				case 1: puts("Jogador 1, onde deseja colocar o xis - (X) ?");
						scanf("%d", &xis);
						puts("Jogador 2, onde deseja colocar o circulo - (O) ?");
						scanf("%d", &circulo);
				break;
				case 2: scanf("%d", &matriz[i][j]);
				break;
			}
			
			//percorre diagonal 1
			if((i==j) && (matriz[i][j] == 1)){
				diagonal_w = diagonal_w + 1;
				if(diagonal_w == 3){
					ganha_x = 1;
					break;
				}
			}else{

				if((i==j) && (matriz[i][j] == 0)){
					diagonal_k = diagonal_k + 1;
					if(diagonal_k == 3){
						ganha_o = 1;
						break;
					}
				}
			}
			diagonal_k = 0;
			diagonal_w = 0;
			//percorre diagonal 2
			if((i==j) && (matriz[i][j] == 1)){
				diagonal_w = diagonal_w + 1;
				if(diagonal_w == 3){
					ganha_x = 1;
					break;
				}
			}else{

				if((i==j) && (matriz[i][j] == 0)){
					diagonal_k = diagonal_k + 1;
					if(diagonal_k == 3){
						ganha_o = 1;
						break;
					}
				}
			}
			//percorre horizontais
			if((i==j) && (matriz[i][j] == 1)){
				horizontal_w = horizontal_w + 1;
				if(horizontal_w == 3){
					ganha_x = 1;
					break;
				}
			}else{

				if((i==j) && (matriz[i][j] == 0)){
					horizontal_k = horizontal_k + 1;
					if(horizontal_k == 3){
						ganha_o = 1;
						break;
					}
				}
			}
			//percorre verticais
			if((i==j) && (matriz[i][j] == 1)){
				vertical_w = vertical_w + 1;
				if(vertcial_w == 3){
					ganha_x = 1;
					break;
				}
			}else{

				if((i==j) && (matriz[i][j] == 0)){
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