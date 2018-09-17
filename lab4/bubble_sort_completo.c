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

	for(i=0; i<n-1; i++){
		for(j=0;j< n-1-i;j++){
			if (v[i]>v[i+1]){
				temp = v[i];
				v[i] = v[i+1];
				v[i+1] = temp;
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