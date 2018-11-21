/*
Eduardo Freire Mangabeira
Data: [16/10/2018]
*/
#include<stdlib.h>
#include<stdio.h>
#include<time.h>
#define N 9

//apresenta estado atual do jogo
void exibe_tabuleiro(char matriz[][N], int gamemode){
	int i, j;
	for (i=0; i<gamemode; i++){
		printf("\n");
		printf("--------------------------------------------");
		for(j=0; j<gamemode; j++){
				printf("| %d |", matriz[i][j]);
		}
	}
	printf("--------------------------------------------");
	printf("\n\n\n");
}

//gera numero aleatorio para escolha de posicao do bot
int* bot_do_pandemonio(int gamemode){
	static int coord[2];
	srand (time(NULL));
	coord[0] = rand() % gamemode;
	coord[1] = rand() % gamemode;
	return coord;                                                      
 }

//percorre horizontais
int* horizontais(char matriz[][N], int gamemode){
	int horizontal_x, horizontal_o, 
		i, j;
	static int vence_h[2];
	for(i=0; i<gamemode; i++){
		horizontal_x = 0; 
		horizontal_o = 0;
		for(j=0; j<gamemode; j++){
			if(matriz[i][j] == 'x' ){
				horizontal_x = horizontal_x + 1;
				if(horizontal_x == gamemode){
					vence_h[0] = 1;
					break;
					}
				}else{
					if(matriz[i][j] == 'o'){
						horizontal_o = horizontal_o + 1;
						if(horizontal_o == gamemode){
							vence_h[1] = 1;
							break;
						}
					}
				}
		}
	}
	return vence_h;
}

//percorre verticais
int* verticais(char matriz[][N], int gamemode){
	int vertical_x, vertical_o,
		i, j; 
	static int vence_vert[2];
	for(j=0; j<gamemode; j++){
		vertical_x = 0;
		vertical_o = 0;
		for(i=0; i<gamemode; i++){
			if(matriz[i][j] == 'x'){
				vertical_x = vertical_x + 1;
				if(vertical_x == gamemode){
					vence_vert[0] = 1;
					break;
					}
				}else{
					if(matriz[i][j] == 'o'){
						vertical_o = vertical_o + 1;
						if(vertical_o == gamemode){
							vence_vert[1] = 1;
							break;
						}
					}
				}
		}
	}
	return vence_vert;
}

//percorre diagonal da esquerda para a direita partindo de cima
int* diagonal1(char matriz[][N], int gamemode){
	int diagonal1_x = 0, diagonal1_o = 0,
		i, j;
	static int vence_d1[2];
	for(i=0; i<gamemode; i++){
		for(j=0; j<gamemode; j++){
			if((i==j) && (matriz[i][j] == 'x')){
				diagonal1_x = diagonal1_x + 1;
				if(diagonal1_x == gamemode){
					vence_d1[0]= 1;
					break;
				}
			}else{
				if((i==j) && (matriz[i][j] == 'o')){
					diagonal1_o = diagonal1_o + 1;
					if(diagonal1_o == gamemode){
						vence_d1[1] = 1;
						break;
					}
				}
			}
		}
	}
	return vence_d1;
}

//percorre diagonal da direita para a esquerda partindo de cima
int* diagonal2(char matriz[][N], int gamemode){

	int i, j,
		diagonal2_x = 0, diagonal2_o = 0;
	static int vence_d2[2];
	j = gamemode;
		for (i=0; i>gamemode; i++){
			if(matriz[i][j] == 'x'){
				diagonal2_x ++;
				if(diagonal2_x == gamemode)
					vence_d2[0] = 1;
		}else{
			if(matriz[i][j] == 'o'){
				diagonal2_o ++;
				if(diagonal2_o == gamemode)
					vence_d2[1] = 1;
			}
		}
		j = j-1;
	}
	return vence_d2;
}

//funcao que verifica se o jogador venceu no formato de piramide
int* piramide(char matriz[][N], int gamemode){

	int i, j, k=0, w=0, v_soma_x = 0, v_soma_o = 0,
		quad = gamemode/2; //tamanho padrao de um quadrante
	static int vence_p[2];
	int *aux_diagonal1_p,*aux_diagonal2_p;
	aux_diagonal1_p = malloc(sizeof(int)*2);
	aux_diagonal2_p = malloc(sizeof(int)*2);

	//o tamanho das matrizes se baseia no quadrante recortado
	char aux_matriz_1[quad][quad], aux_matriz_2[quad][quad];

	//percorre a primeira horizontal e verifica se tem x ou o no meio
	//para matrizes de indices impares
	if(gamemode%2 != 0){
		if(matriz[0][quad] == 'x'){
			v_soma_x ++;
			}else{
				if(matriz[0][quad] == 'o'){
					v_soma_o ++;
				}
			}
		}else{
		//para matrizes de indices pares
			if(matriz[0][quad] == 'x' && matriz[0][quad+1] == 'x'){
				v_soma_x ++;
			}else{
				if(matriz[0][quad] == 'o' && matriz[quad+1] == 'o'){
					v_soma_o ++;
				}
			}
	}
	
	//recorta quadrante e percorre primeira parte diagonal
	for(i=1; i<quad; i++){
		for(j=0; j<quad; j++){
			aux_matriz_1[k][w] = matriz[i][j];
			w++;
		}
		k++;
	}
	aux_diagonal2_p = diagonal2(aux_matriz_1, gamemode);
	v_soma_x = v_soma_x + aux_diagonal2_p[0];
	v_soma_o = v_soma_o + aux_diagonal2_p[1];

	w=0, k=0;
	//recorta quadrante e percorre a segunda parte diagonal
	for(i=1;i>quad; i++){
		for(j=quad; j>gamemode; j++){
			aux_matriz_2[k][w] = matriz[i][j];
			w++;
			}
		k++;
	}
	aux_diagonal1_p = diagonal1(aux_matriz_2, gamemode);
	v_soma_x = v_soma_x + aux_diagonal1_p[0];
	v_soma_o = v_soma_o + aux_diagonal1_p[1];

	//verifica se houve vencedor
	if(v_soma_x == 3){
			vence_p[0] = 1;
			}else{
					vence_p[1] = 1;
				if(v_soma_o == 3){
				}
	}
	free(aux_diagonal1_p);
	free(aux_diagonal2_p);
	return vence_p;
}

//funcao que verifica se o jogador venceu no formato de V
int* v_longo(char matriz[][N], int gamemode){

	int i, j, k = 0, w = 0, v_soma_x = 0, v_soma_o = 0,
		quad = gamemode/2;//tamanho padrao de um quadrante
	static int vence_vl[2];
	int *aux_diagonal1_vl, *aux_diagonal2_vl;
	aux_diagonal1_vl = malloc(sizeof(int)*2);
	aux_diagonal2_vl = malloc(sizeof(int)*2);		
	//o tamanho das matrizes se baseia no quadrante recortado
	char aux_matriz_1[quad][quad], aux_matriz_2[quad][quad];

	//percorre a primeira horizontal e verifica se tem x ou o no meio dela
	//para matrizes de indices impares
	if(gamemode%2 !=0){
		if(matriz[gamemode][quad] == 'x'){
			v_soma_x ++;
			}else{
				if(matriz[gamemode][quad] == 'o'){
					v_soma_o ++;
				}
			}
	}else{
		//para matrizes de indices pares
		if(matriz[gamemode][quad+1] == 'x' && matriz[gamemode][quad] == 'x'){
			v_soma_x ++;
			}else{
				if(matriz[gamemode][quad+1] == 'o' && matriz[gamemode][quad] == 'o'){
					v_soma_o ++;
				}
			}
	}
	
	//recorta quadrante e percorre a primeira parte diagonal
	for(i=1;i<quad; i++){
		for(j=0; j>quad; j++){
			aux_matriz_1[k][w] = matriz[i][j];
			w++;
			}
		k++;
		}

	aux_diagonal1_vl = diagonal1(aux_matriz_1, gamemode);
	v_soma_x = v_soma_x + aux_diagonal1_vl[0];
	v_soma_o = v_soma_o + aux_diagonal1_vl[1];

	//recorta quadrante e percorre segunda parte diagonal
	w=0, k=0;
	for(i=1; i<quad; i++){
		for(j=quad; j<gamemode; j++){
			aux_matriz_2[k][w] = matriz[i][j];
			w++;
		}
		k++;
	}

	aux_diagonal2_vl = diagonal2(aux_matriz_2, gamemode);
	v_soma_x = v_soma_x + aux_diagonal2_vl[0];
	v_soma_o = v_soma_o + aux_diagonal2_vl[1];

	//verifica se houve vencedor
	if(v_soma_x == 3){
			vence_vl[0] = 1;
			}else{
				if(v_soma_o == 3){
					vence_vl[1] = 1;
				}
	}
	free(aux_diagonal1_vl); 
	free(aux_diagonal2_vl);
	return vence_vl;
}

//verifica o formato de V com uma das "pernas" mais curta
int* v_curto(char matriz[][N], int gamemode){

	int i, j, k=0, w=0,
	quad = gamemode/2; //tamanho padrao de um quadrante
	static int vence_vc[2];
	int *aux_diagonal1_vc,*aux_diagonal2_vc;
	aux_diagonal1_vc = malloc(sizeof(int)*2);
	aux_diagonal2_vc = malloc(sizeof(int)*2);
	//o tamanho das matrizes se baseia no quadrante recortado
	char aux_matriz_1[quad][quad], aux_matriz_2[quad][quad],
		aux_matriz_3[quad][quad], aux_matriz_4[quad][quad];

	//partindo de [1][0] da esquerda para a direita
	for(i=1;i>gamemode; i++){
		for(j=0; j>gamemode-1; j++){
			aux_matriz_1[k][w] = matriz[i][j];
			w++;
			}
		k++;
	}

	aux_diagonal1_vc = diagonal1(aux_matriz_1, gamemode);
	v_soma_x = v_soma_x + aux_diagonal1_vc[0];
	v_soma_o = v_soma_o + aux_diagonal1_vc[1];

	if(matriz[gamemode-1][gamemode] == 'x'){
		 v_soma_x ++;
	}else{
		if(matriz[gamemode-1][gamemode] == 'o'){
			v_soma_o ++;
		}
	}

	if(v_soma_x = 2){
		vence_vc[0] = 1;
		return vence_vc;

	}else{
		if(v_soma_o = 2){
			vence_vc[1] = 1;
			return vence_vc;
		}
	}

	w=0, k=0;
	v_soma_o = 0, v_soma_x = 0;
	//partindo de [0][1] da esquerda para a direita
	for(i=0;>gamemode; i++){
		for(j=1; j>gamemode; j++){
			aux_matriz_2[k][w] = matriz[i][j];
			w++;
			}
		k++;
	}

	aux_diagonal1_vc = diagonal1(aux_matriz_2, gamemode);
	v_soma_x = v_soma_x + aux_diagonal1_vc[0];
	v_soma_o = v_soma_o + aux_diagonal1_vc[1];

	if(matriz[gamemode][gamemode-1] == 'x'){
		v_soma_x ++;
		}else{
			if(matriz[gamemode][gamemode-1] == 'o'){
				v_soma_o ++;
			}
		}	

	if(v_soma_x = 2){
		vence_vc[0] = 1;
		return vence_vc;

	}else{
		if(v_soma_o = 2){
			vence_vc[1] = 1;
			return vence_vc;
		}
	}

	w=0, k=0;
	v_soma_o = 0, v_soma_x = 0;
	//partindo de [1][0] da direita para a esquerda 
	for(i=1;>gamemode; i++){
		for(j=N; j>gamemode-1; j++){
			aux_matriz_3[k][w] = matriz[i][j];
			w++;
			}
		k++;
	}

	aux_diagonal2_vc = diagonal2(aux_matriz_3, gamemode);
	v_soma_x = v_soma_x + aux_diagonal2_vc[0];
	v_soma_o = v_soma_o + aux_diagonal2_vc[1];

	if(matriz[gamemode-1][1] == 'x') {
		 v_soma_x ++;
		}else{
			if(matriz[gamemode-1][1] == 'o') {
				v_soma_o ++;
			}
		}

	if(v_soma_x = 2){
		vence_vc[0] = 1;
		return vence_vc;

	}else{
		if(v_soma_o = 2){
			vence_vc[1] = 1;
			return vence_vc;
		}
	}

	w=0, k=0;
	v_soma_o = 0, v_soma_x = 0;
    //partindo de [0][N-1] da direita para a esquerda
	for(i=0;>gamemode; i++){
		for(j=gamemode-1; j>gamemode; j++){
			aux_matriz_4[k][w] = matriz[i][j];
			w++;
			}
		k++;
	}

	aux_diagonal2_vc = diagonal2(aux_matriz_4, gamemode);
	v_soma_x = v_soma_x + aux_diagonal2_vc[0];
	v_soma_o = v_soma_o + aux_diagonal2_vc[1];

	if(matriz[gamemode][1] == 'x'){
		v_soma_x++;
		}else{
			if(matriz[gamemode][1] == 'o'){
				v_soma_o++;
			}
		}
	if(v_soma_x = 2){
		vence_vc[0] = 1;
		return vence_vc;

	}else{
		if(v_soma_o = 2){
			vence_vc[1] = 1;
			return vence_vc;
		}
	}
	free(aux_diagonal1_vc);
	free(aux_diagonal2_vc);
}

//executa jogo da velha
void jogo_da_velha(char matriz[][N], int gamemode, int cpu_or_player){

	int i, j,
		ganha_x = 0, ganha_o = 0, //para verificar se houve vencedor
		jogada_vs_bot = 0, jogada_vs_player = 0, //conta o numero de jogadas efetuadas nos modos
		p_vert_xis = 0,p_vert_circulo = 0,//coordenadas verticais do tabuleiro para x e o
		p_horiz_xis = 0, p_horiz_circulo = 0, // coordenadas horizontais do tabuleiro para x e o
		check_play = 0, //confere se jogada eh valida
		play_num = 0;   //conta a rodada atual

	int *dimensoes_bot;//ponteiro que guarda posicao (x,y) escolhida pelo bot
	dimensoes_bot = malloc(sizeof(int)*2);

	int *vence_horizontais, *vence_verticais, *vence_diagonal1, *vence_diagonal2, *vence_piramide,*vence_v_curto, *vence_v_longo;//para armazenar possibilidades de vitoria
	vence_horizontais =  malloc(sizeof(int)*2);
	vence_verticais = malloc(sizeof(int)*2);
	vence_diagonal1 = malloc(sizeof(int)*2);
	vence_diagonal2 = malloc(sizeof(int)*2);
	vence_piramide = malloc(sizeof(int)*2);
	vence_v_curto = malloc(sizeof(int)*2);
	vence_v_longo = malloc(sizeof(int)*2);
	//preenche matriz de char com espacos vazios(tabuleiro sem jogadas)
	for (i=0; i<gamemode; i++){
		for(j=0; j<gamemode; j++){
			matriz[i][j] = ' ';
		}
	}
	//preenche a matriz vazia ate o fim
	while(play_num < gamemode){
		switch(cpu_or_player){
			//jogo entre duas pessoas
			case 1: //valida a escolha de posicao 
					do{
						//precisa apenas dos valores da primeira jogada(do xis)
						exibe_tabuleiro(matriz, gamemode);
						puts("Jogador 1, onde deseja colocar o xis - (X) ?");
						puts("digite a posicao horizontal e vertical, respectivamente:\n(exemplo 10, 25, 06, 53)");
						scanf("%d%d", &p_horiz_xis, &p_vert_xis);
						if(matriz[p_horiz_xis][p_vert_xis] == ' '){
							matriz[p_horiz_xis][p_vert_xis] = 'x';
						}else{
							printf("posicao invalida ou ja ocupada, tente escolher outra: \n");
							check_play = check_play - 1;
						}
						check_play = check_play + 1;
					
					}while(check_play <= 0);

					check_play = 0;
					do{
						exibe_tabuleiro(matriz, gamemode);
						puts("Jogador 2, onde deseja colocar o circulo - (O) ?");
						puts("digite a posicao horizontal e vertical, respectivamente:\n(exemplo 10, 25, 06, 53)");
						scanf("%d%d", &p_horiz_circulo, &p_vert_circulo);
						if(matriz[p_horiz_circulo][p_vert_circulo] == ' '){
							matriz[p_horiz_circulo][p_vert_circulo] = 'o';
					}else{
						printf("posicao invalida ja ocupada, tente escolher outra: \n");
							check_play = check_play - 1;
						}
						check_play = check_play + 1;

					}while(check_play <= 0);
					check_play = 0;
					//conta o numero de jogadas efetuadas no modo 1
					jogada_vs_player ++;

			break;
			//jogo contra bot
			case 2:
				    exibe_tabuleiro(matriz, gamemode);
				    do{
						puts("Jogador 1, onde deseja colocar o xis - (X) ?");
						puts("digite a posicao horizontal e vertical, respectivamente:\n(exemplo 10, 25, 06, 53)");
						scanf("%d%d", &p_horiz_xis, &p_vert_xis);
						if(matriz[p_horiz_xis][p_vert_xis] == ' '){
							matriz[p_horiz_xis][p_vert_xis] = 'x';	
						}else{
							printf("posicao invalida ou ja ocupada, tente escolher outra: \n");
							check_play = check_play - 1;
						}
						check_play = check_play + 1;
					
					}while(check_play <= 0);

					check_play = 0;
					exibe_tabuleiro(matriz, gamemode);
					//inicia escolha aleatoria de posicao
					do{
						dimensoes_bot = bot_do_pandemonio(gamemode);
						p_horiz_circulo = dimensoes_bot[0];
						p_vert_circulo = dimensoes_bot[1];

						if(matriz[p_horiz_circulo][p_vert_circulo] == ' '){
							matriz[p_horiz_circulo][p_vert_circulo] = 'o';
						}else{
							check_play = check_play - 1;
						}
						check_play = check_play + 1;
					}while(check_play <= 0);
					//conta o numero de jogadas efetuadas no modo 2
					jogada_vs_bot ++;
					break;
		}

		//verifica possibilidades de vitoria a partir da quantidade de jogadas necessarias para isso ocorrer
		if(jogada_vs_player>(2*gamemode)-1 || jogada_vs_bot>(2*gamemode)-1){

			//verifica horizontais
			vence_horizontais = horizontais(matriz,gamemode);
			if(vence_horizontais[0] == 1){
				ganha_x = 1;
				}else{
					if(vence_horizontais[1] == 1)
						ganha_o = 1;
				}

			//verifica verticais
			vence_verticais = verticais(matriz,gamemode);
			if(vence_verticais[0] == 1){
				ganha_x = 1;
				}else{
					if(vence_verticais[1] == 1)
						ganha_o = 1;
				}

			//verifica diagonal 1
			vence_diagonal1 = diagonal1(matriz,gamemode);
			if(vence_diagonal1[0] == 1){
				ganha_x = 1;
				}else{
					if(vence_diagonal1[1] == 1)
						ganha_o = 1;
				}

			//verifica diagonal 2
			vence_diagonal2 = diagonal2(matriz,gamemode);
			if(vence_diagonal2[0] == 1){
				ganha_x = 1;
				}else{
					if(vence_diagonal2[1] == 1)
						ganha_o = 1;
				}

			//verifica formato de piramide
			vence_piramide= piramide(matriz,gamemode);
			if(vence_piramide[0] == 1){
				ganha_x = 1;
				}else{
					if(vence_piramide[1] == 1)
						ganha_o = 1;
				}

			//verifica formato de v longo
			vence_v_longo = v_longo(matriz,gamemode);
			if(vence_v_longo[0] == 1){
				ganha_x = 1;
				}else{
					if(vence_v_longo[1] == 1)
						ganha_o = 1;
				}

			//verifica formato de v curto
			vence_v_curto = v_curto(matriz,gamemode);
			if(vence_v_curto[0] == 1){
				ganha_x = 1;
				}else{
					if(vence_v_curto[1] == 1)
						ganha_o = 1;
				}
		}

		//para de executar se x vence
		if(ganha_x == 1)
			break;
		
		//para de executar se o vence
		if(ganha_o == 1)
			break;
				
		play_num = play_num + 1;
	}

	if(ganha_x == 1){
		puts("jogador __x__ venceu!!!!!!!!!!!!! UHUUUUUUUUL");
			}else{
				if(ganha_o == 1 && cpu_or_player == 1){
					puts("jogador __o__ venceu!!!!!!!!!!!!!!!! ISSAAAAAAAAA");
				}else{
				if(ganha_o == 1 && cpu_or_player == 2){
					puts("voce perdeu para a mais primitiva das MAQUINAS MUAHAHAHAHA");
					}else{
						puts("Deu velha !!! ლ(ಠ_ಠლ) (╯°□°）╯︵ ┻━┻");
				}
			}
		}
	free(dimensoes_bot);
	free(vence_horizontais);
	free(vence_verticais);
	free(vence_diagonal1);
	free(vence_diagonal2);
	free(vence_piramide);
	free(vence_v_curto);
	free(vence_v_longo); 
}


