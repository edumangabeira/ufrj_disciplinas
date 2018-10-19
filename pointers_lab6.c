//ponteiros e alocacao dinamica

/*
testar a execucao no C-tutor.com

*/
//exercicio 1
#include<stdio.h>
#include<stdlib.h>
int main() {
  int a;
  int *p; //cria um ponteiro
  
  a = 100;
  p = (int *) malloc(sizeof(int)); //o ponteiro aponta pra uma posicao de memoria e aloca espaco para um inteiro
  *p = 200;
  
  printf("p = %p\n", p);
  printf("*p = %d\n", *p);
  printf("p = %p\n", &p);

  return 0;
}


//exercicio 2
int main() {
  int a;
  int *p;
  
  a = 100;
  p = &a;
  *p = 200;
  
  printf("p = %p\n", p);
  printf("*p = %d\n", *p);

  return 0;
}

//exercicio 3
int main() {
  int *p;
  int i;
  p = (int *) malloc(sizeof(int) * 5);
  for (i=0; i< 5; i++) 
     *(p+i) = i*10;
  
  for (i=0; i< 5; i++) { 
    printf("p+%d=%p ",i, (p+i));
    printf("*(p+%d)=%d\n",i, *(p+i));
  }
  
  return 0;
}

//exercicio 4
int calculaQuadradoCubo (int valor, int *potCubo){
   *potCubo = valor * valor * valor;
   return valor * valor;
}
int main() {
   int valor = 2;
   int quadrado, cubo;
   quadrado = calculaQuadradoCubo(valor, &cubo);
   printf ("Quadrado e o cubo de %d: %d, %d\n",valor,quadrado,cubo);
   return 0;
}

//exericio 5
//chama a funcao troca por referencia
void troca (int *a, int *b) {
   int temp;
   temp = *a;
   *a = *b;
   *b = temp;
}
int main(void) {
   int x=1, y=2;
   troca(&x, &y);
   printf("x=%d y=%d\n", x, y);
   return 0;
}

//exercicio 5 sem ponteiros
//esse exemplo mostra que o valor das variaveis nao vai ser trocado chamando a funcao por valor
void troca (int a, int b) {
   int temp;
   temp = a;
   a = b;
   b = temp;
}
int main(void) {
   int x=1, y=2;
   troca(x, y);
   printf("x=%d y=%d\n", x, y);
   return 0;
}
//exercicio 6
int main (void) {
   int i, *pi, j, *pj;
   char c, *pc;

   pc = &c;
   c = 'z';
   printf("pc = %p\n", pc);
   printf("&c = %p\n", &c);
   printf("c = %c\n", *pc);

   j = 10;
   pj = &j;
   printf("pj = %p\n", pj);
   printf("&j = %p\n", &j);
   printf("j = %d\n", *pj);

   i = 20;
   *pi = i;
   printf("pi = %p\n", pi);
   printf("&i = %p\n", &i);
   printf("i = %d\n", *pi);
   return 0;
}
