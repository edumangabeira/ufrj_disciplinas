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
   char decisao;

   while(1){

       //le o operando 1, o operador, e o operando 2
       puts("Digite o operando 1, o operador (+, -, / , * ou ^) e o operando 2\n\n");
       scanf("%d %c %d", &a, &operador, &b);

      //executa a operacao solicitada
      if (operador == '+') {
         printf("%d\n\n", soma(a,b));
      } else if (operador == '-') {
         printf("%d\n\n", subtrai(a,b));
      } else if (operador == '/') {
         if (b!=0)
            printf("%d\n\n", divide(a,b));
      } else if (operador == '*') {
         printf("%d\n\n", multiplica(a,b));

      } else if (operador == '^') {
         printf("%d\n\n", potencia(a,b));
      } else {
         puts("Operador nao definido!\n\n\n");
      }

      puts("Deseja realizar mais alguma operacao?\n\n digite sua opcao('s' - sim e 'n' - nao)");
      scanf("%c",&decisao);
      if(decisao != 's'){
         break;
      }
   }
   return 0;
}
