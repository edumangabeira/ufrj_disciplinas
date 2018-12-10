#include<stdio.h>
#include<stdlib.h>

int main(void){
	char nome_arq_entra[50], nome_arq_sai[50];
	char *palavra, nova_palavra;
	FILE *arq_entrada;
	FILE *arq_saida;

	puts("digite o nome do arquivo de entrada");
	scanf("%s", nome_arq_entra);
	//verifica abertura do arquivo de entrada
	if((arq_entrada = fopen(nome_arq_entra,"r")) == NULL){
		printf("erro na abertura do arquivo %s", nome_arq_entra);
		return 1;
	}
	puts("digite o nome do arquivo de saida");
	scanf("%s", nome_arq_sai);
	//verifica abertura do arquivo de saida
	if((arq_saida = fopen(nome_arq_sai, "w+")) == NULL){
		printf("erro na abertura do arquivo %s", nome_arq_sai);
		return 2;
	}
	//aloca espaco para na memoria
	if((palavra = (char *) malloc(sizeof(char)*50)) == NULL){
		printf("erro ao alocar memória\n");
		return 3;
	}

	//pega caracter a caracter até o fim do arquivo
	while((nova_palavra = fgetc(arq_entrada)) != EOF){
	//retira apenas vogais
		switch (nova_palavra) {
			case 'a': case 'e': case 'i': case 'o': case 'u':
			nova_palavra = '-'; break;
			case 'A': case 'E': case 'I': case 'O': case 'U':
			nova_palavra = '-'; break;
			}
		fprintf(arq_saida, "%c", nova_palavra);
		if(nova_palavra == '\0')
			fprintf(arq_saida, "\n");
	}
	fclose(arq_entrada);
	fclose(arq_saida);
	free(palavra);
	return 0;
}