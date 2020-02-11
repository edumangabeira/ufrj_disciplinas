/*Eduardo Freire Mangabeira
Data: [17/09/2018]
Descricao: ordena um vetor de forma crescente usando o algoritmo de bolha
*/
//bubble sort completo
#include<stdio.h>
#define N 40;
void bubble_sort(float vet[],int n);

void bubble_sort(float vet[], int n){
	int i, j;
	float temp;

	for(i=0; i < n-1; i++){   //(n-1) Indica que eh a ultima posicao que da pra "levantar".
		for(j=0;j< n-1-i;j++){//(n-1-i) Mostra que a cada posicao percorrida eh uma a menos pra comparar
			if(v[i] > v[i+1]){//Se a posicao atual for maior que a seguinte...
				temp = v[i];  //armazena o valor da posicao atual numa variavel temporaria.
				v[i] = v[i+1];//armazena o valor da posicao seguinte na variavel da posicao atual.
				v[i+1] = temp;//armazena o valor da variavel temporaria na variavel da posicao anterior.
			}
		}
	}
}	

int main(void){
	float v[N];
	int n,i;

	printf("Informe o tamanho do vetor(maximo %d): \n", N);
	scanf("%d",&n);

	printf("Informe o %d elementos do vetor \n", n);
	for (i= 0; i<n ;i++){
		scanf("%d", &v[i]);
	}

	ordena (v, n);

	puts("Abaixo esta o vetor em ordem crescente\n\n\n");

	for(i=0;i<n;i++){

	printf("%d", &v[i]);
	}
	return 0;
}