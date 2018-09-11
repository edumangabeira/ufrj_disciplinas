/*
Descricao: permite realizar as operacoes matematicas basicas sobre inteiros 
(somar, subtrair, dividir e multiplicar)
*/

#include "matematica.h"
#include <stdio.h>

int main (void) {
   //dicionario de dados
   int a, b; //operandos
   char operador; //operador a ser usado
   
   //le o operando 1, o operador, e o operando 2
   puts("Digite o operando 1, o operador (+, -, / ou *) e o operando 2");
   scanf("%d %c %d", &a, &operador, &b);

   //executa a operacao solicitada
   if (operador == '+') {
      printf("%d\n", soma(a,b));
   } else if (operador == '-') {
      printf("%d\n", subtrai(a,b));
   } else if (operador == '/') {
      if (b!=0) 
         printf("%d\n", divide(a,b));
   } else if (operador == '*') {
      printf("%d\n", multiplica(a,b));
   } else {
      puts("Operador nao definido!");
   }
   return 0;
}
