#include<stdio.h>
#include<stdlib.h>

typedef struct {
float x, y;
} tPonto;
typedef struct {
tPonto p;
int id;
} tPlano;

int main(void){
	tPlano plano, *planos;
	int qtd_planos, i;
	char nome[50];

	//aloca espaco e verifica se houve sucesso
	planos = (tPlano *) malloc(sizeof(tPlano*qtd_planos));
	if(planos == NULL){
		printf("erro de alocacao");
		return 0;
	}

	//cria planos
	puts("Quantos planos gostaria de salvar?");
	scanf("%d", &qtd_planos);
	for(i=0; i<qtd_planos; i++){
		printf("digite neste padrao - x y id - :");
		scanf("%f %f %d", &planos[i].p.x, &planos[i].p.y, &planos[i].id);
	}

	//cria arquivo
	puts("Entre com o nome do arq de entrada:");
	scanf("%49s", nome);
	FILE *arq = fopen(nome, "rb");
	if(!arq){
		printf("Erro na abertura do arquivo\n");
		return -1;
	}
	//escreve os planos no arquivo
	fwrite(planos, sizeof(tPlano))

	//le o arquivo ate nao ter mais planos
	fread(&plano, sizeof(tPlano), 1, arq);
	while(!feof(arq)){
		printf("%f%f%d\n",plano.p.x, plano.p.y, plano.id);
		fread(&plano, sizeof(tPlano), 1, arq);
	}
	fclose(arq);
	free(planos);
	return 0;
}