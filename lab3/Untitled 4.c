/*
Eduardo Freire Mangabeira
github: /edumangabeira
Descrição: Imprime um desenho na tela com o seguinte padrão:

*
**
***
****
*****
(fazer número de andares qualquer)

Entrada: Número de andares (inteiro)

Saída: figura geométrica.
*/
#include<stdio.h>
int main(void){
    
    int aux, i, n;
    aux = 0;
    i = 0;
    scanf("%d",n)
    while(n > aux){
        
        while(n > i){
   
            printf("*");
            i = i + 1;
        }
        aux = aux + 1
    }

return 0;
}