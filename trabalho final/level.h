/*
Eduardo Freire Mangabeira
Victoria de Andrade Azevedo
Data de inicio: [16/10/2018]
Data de conclusao: [17/11/2018]
*/
#define N 9

void exibe_tabuleiro(int gamemode, char matriz[][N]);

int *bot_do_pandemonio(int gamemode);

int *horizontais(char matriz[][N], int gamemode);

int *verticais(char matriz[][N], int gamemode);

int *diagonal1(char matriz[][N], int gamemode);

int *diagonal2(char matriz[][N], int gamemode);

int *piramide(char matriz[][N], int gamemode);

int *v_longo(char matriz[][N], int gamemode);

int *v_curto(char matriz[][N], int gamemode);

int *percursos(char matriz[][N], int gamemode, int jogada_vs_player, int jogada_vs_bot);

void jogo_da_velha(char matriz[][N],int gamemode,int cpu_or_player);

