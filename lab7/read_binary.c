#include<stdio.h>
//exemplo fread()
int main(void){
	int inteiro;
	float real;
	char carac;
	if(!(arq = fopen("arquivo_bin.dat","rb"))){
		return -1;
	}

	fread(&inteiro, sizeof(int), 1, arq);
	fread(&real, sizeof(float), 1, arq);
	fread(&carac, sizeof(char), 1, arq);

	return 0;
}