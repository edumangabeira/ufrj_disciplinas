/* 
Implementa o conjunto de funcoes para operacoes matematicas basicas declaradas em matematica.h
*/

/* 
Descricao: soma dois numeros inteiros
Entrada: os dois numeros inteiros
Saida: a soma dos dois numeros
Restricoes:
*/
int soma (int x, int y) {
   return x + y;
}

/* 
Descricao: subtrai dois numeros inteiros
Entrada: os dois numeros (minuendo e subtraendo)
Saida: o resto da subtracao
Restricoes:
*/
int subtrai (int x, int y) {
   return x - y;
}

/* 
Descricao: divide dois numeros inteiros
Entrada: os dois numeros (dividendo e divisor)
Saida: o quociente da divisao
Restricoes: o divisor deve ser diferente de zero
*/
int divide (int x, int y) {
   return x / y;
}

/* 
Descricao: multiplica dois numeros inteiros
Entrada: os dois numeros inteiros
Saida: o produto dos dois numeros
Restricoes:
*/
int multiplica (int x, int y) {
   return x * y;
}

int potencia(int x, int y){
	int i;
	int k = 1;
	for(i=0; i<y;i++){
		k = x * k;
	}
	if (y == 0){
		k = 1;
	}
	return k;
}
