/*
Implementa funções para ordenar vetores
*/
#include<stdio.h>
//Todo: mudar a ordem de crescente para decrescente;
void bubble_sort(vetor[N], len){
	int i, j;
	float temp;
	for(i= len-1; i > 0 ; i--){
		for(j= len-1-i; j > 0 ; j--){
			if(vetor[i] > vetor[i+1]){
				temp = vetor[i];
				vetor[i] = vetor[i+1];
				v[i+1] = temp;
			}
		}
	}
}