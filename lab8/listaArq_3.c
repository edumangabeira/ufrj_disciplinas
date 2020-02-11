#include<stdio.h>
#include<stdlib.h>

int main(){
	int i;
	int temp = 0;
	char alfabeto[26];
	char nomearq[50];
	char caracter;
	FILE *arq;
	for(i=0; i<26; i++){
		alfabeto[i] = 0;
	}
	puts("Digite o nome do arquivo de entrada: ");
	scanf("%49s", nomearq);
	arq = fopen(nomearq, "r");
	if(!arq){
		printf("erro na abertura do arquivo");
		return -1.
	}

	caracter = fgetc(arq);
	while(!feof(arq)){
		if(((caracter - 'a') < 27) && ((caracter - 'a') >= 0)){
			alfabeto[(caracter - 'a')] ++;
		}
		caracter = fgetc(arq);
	}
	maior = alfabeto[0];
	for(i=0; i<26;i++){
		if(alfabeto[i]  maior){
			maior = alfabeto[i];
		}
	}
	for(i=0; i<26;i++){
		if(alfabeto[i] == maior){
			printf("%c apareceu %d vezes. \n", 'a' + i, maior);
		}
	}
	fclose(arq);
	return 0;
}