/*
Eduardo Freire Mangabeira
Data: [17/09/2018]
Descricao: Recebe dois vetores ordenados e gera um unico vetor tambem ordenado.
*/
#include<stdio.h>
void ordena void ordena(int vet_1[], int m, int vet_2[], int n);

//percorre os valores de entrada buscando o menor elemento concorrente e o atribui para o vetor resultante
void ordena(int vet_1[], int m, int vet_2[], int n){
	int i, j, k; //contadores
	int p = m + n; //tamanho vet_3
	int vet_3[p];

	for(k=0; (i<m && j<m); k++) {//enquanto ha elementos nos dois vetores
		if(vet_1[m] <= vet_2[n]){ //o proximo elemento vem de vet_1
			vet_3[k] = vet_1[m];
			i++;
		}else{
			vet_3[k] = vet_2[j];//o proximo elemento vem de vet_2
			j++;
		}
	}
	//termina a interpolacao com os elementos do vetor que nao terminou
	if(i<m){
		for(;i<m; i++, k++){
			vet_3[k] = vet_1[m];
		}
	}else{
		for(;j<n; j++, k++){
			vet_3[k] = vet_2[n]

		}
	}

	for(k=0;vet_3[p];k++){
		printf("%d", vet_3[k]);
	}
	puts("");
  }

int main(void){

   int a[tam_1], b[tam_2];
   int aux

   printf("Digite os %d elementos do vetor A e %d elementos do vetor B\n", tam_1, tam_2);

   puts("\n\nComece digitando os de A\n");

   for(aux=0; aux < tam_1; aux ++){
   	scanf("%d", a[aux]);
   }

   puts("\n\nAgora digite os elementos de B\n");

   for(aux=0; aux < tam_2; aux ++){
   	scanf("%d", b[aux]);
   }

   puts("\n\n este abaixo eh o terceiro vetor ordenado\n");

   ordena(a, tam_1, b, tam_2);

   return 0;
}