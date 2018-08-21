/*
Eduardo Freire Mangabeira
github: /edumangabeira
Descrição: 1) Imprime um desenho na tela com o seguinte padrão:

*
**
***
****
*****
(fazer número de andares qualquer)

2) imprime o desenho ao contrário

Entrada: Número de andares (inteiro)

Saída: figura geométrica.
*/
#include<stdio.h>
int main(void){
    
    int aux, i, n;
    aux = 0;
    scanf("%d",&n);
    
    //crescente
    while(n >= aux){
        i = 0;
        while(aux > i){
   
            printf("*");
            i = i + 1;
        }
        printf("\n");
        aux = aux + 1;
    }
    
    //descrescente
    aux = n
    while(aux <= 0){
        i = 0;
        while(i < aux){
   
            printf("*");
            i = i + 1;
        }
        printf("\n");
        aux = aux - 1;
    }

return 0;
}