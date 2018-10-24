#include <stdio.h>

//recebe duas strings como argumento e verifica se sao iguais
//retorna 1 se sao iguais e 0 caso contrario
//pode ser tb: int compara_strings(char str1[], char str2[])
int compara_strings(char *str1,char *str2){
	while(*str1 == *str2){
		if (*str1 == '\0')
			return 1;
		str1++;
		str2++;
	}
	return 0;
}

int main(){
	int cont;//contabilizar o numero de ocorrencias da palavra no arquivo
	char palavra[30];//palavra a ser buscada
	char aux[30];//auxiliar para ler as palavras do arquivo
	FILE *arq; //arquivo para leitura
	char arquivo[50]; //nome do arquivo de entrada

	//recebe o nome do arquivo e o abre para leitura
	puts("digite o nome do arquivo texto com no maximo 49 caracteres:");
	scanf("%49s", arquivo);

	//abrir arquivo para leitura
	arq = fopen(arquivo,"r");
	if(!arq){
		printf("erro de abertura do arquivo %s\n", arquivo);
		return 1;
	}
	//recebe a palavra de busca
	puts("digite a palavra de busca:");
	scanf("%29s", palavra);

	//le o arquivo palavra por palavra
	while(fscanf(arq, "%s", aux) > 0){
		//comparar a palavra lida com a palavra de busca
		if(compara_strings(palavra, aux))
			cont ++;
	}
	//fecha o arquivo
	fclose(arq);
	//exibe o resultado do programa
	printf("A palavra %s aparece %d vezes no arquivo %s\n", palavra, cont, arquivo);

	return 0;
}