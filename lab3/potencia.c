/*
Eduardo Freire Mangabeira
github: /edumangabeira
Descrição:[20-08-2018] Encontra o valor de um número fornecido pelo usuário elevado a uma potência também fornecida.

Entrada: Dois números inteiros; base e potência.

Saída: Um número inteiro.
*/
#include<stdio.h>

//versão ótima #1
int main(void){
    int x,y;
    int resultado = 1;
    
    printf("Digite a base e a potencia, respectivamente");
    scanf("%d %d",&x &y);

    while (y > 0){
        resultado = resultado * x;
        y = y - 1;
    }
     
    printf("%d elevado a potencia de %d eh igual a %d", x, y, resultado);
    return 0;
}
    
//versão protótipo    
/*int main(void){
    int x,y;
    int aux, resultado;

    aux = 0;
    resultado = 1;
    printf("Digite a base e a potencia, respectivamente");
    scanf("%d %d",&x &y);

    if(y > 0){

        while (aux < y){
            resultado = resultado * x;
            aux = aux + 1;
        }else{
            if(y == 0){
                resultado = 1;
            }
    }  
    printf("%d elevado a potencia de %d eh igual a %d", x, y, resultado);
    return 0;
}

*/