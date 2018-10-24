#include <stdio.h>
#define N 140

int main(void){
	double cpf;
	int id;
	char nome[N];
	FILE *arquivo;
	printf("Diga seu CPF, numero de matricula e nome, separados por espaços");
	scanf("%lf %d %s", &cpf, &id, nome);

	if(!(arquivo = fopen("arquivo.txt","w"))){
		printf("Erro na abertura do arquivo!\n");
		return 0;
	}

	fprintf(arquivo, "%lf %d %s", cpf, id, nome);
	fclose(arquivo);
	return 0;

}