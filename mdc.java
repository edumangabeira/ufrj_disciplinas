/*
Eduardo Freire Mangabeira
Github: edumangabeira
Data início: 11/Mar/2019

Descrição: Classe contendo métodos para fatoração, divisão e outras
operações básicas necessárias para se obter o máximo divisor comum
entre dois números inteiros.

Entrada: Dois inteiros
Saída: MDC entre dois inteiros
*/
import java.util.Scanner;
class mdc{

	static int N = 26; // número máximo de primos numa lista
	// n = 26 == primos de 1 a 100

	/*
	algoritmo da divisão simples
	entrada: dois inteiros positivos A e B
	saída: inteiros positivos Q e R tais que A=BQ+R e 0<=R<B
	*/
	int divisaoSimples(int dividendo, int divisor){

		int quociente, resto;
		resto = dividendo;
		quociente = 0;
		while(true){
		   if(resto < divisor){
			   // System.out.println("O quociente é:" + quociente);
			   break;
		    }else{
				resto = resto - divisor
				quociente += 1;
			}
		}
		return resto;
	}

	/*
	algoritmo de fatoração mais simples possível
	entrada: um inteiro positivo n
	saída: inteiro positivo f que é o menor fator primo de n.
	--WIP--
	*/
	int fatoracaoIngenua(int inteiro){
		int f = 2; // fator primo atual
		if(divisao(inteiro, f) == 0){
			System.out.println(f + " é fator de " + inteiro);
		}else{
			f++;
			if(f>sqrt(inteiro)){
				System.out.println(inteiro + "é primo");
			}
		}

		assert true;
		// retornar o que?
	}

	/*
	algoritmo de fatoração de fermat
	entrada: um inteiro positivo ímpar n
	saída: um fator de n e uma mensagem indicando que n é primo
	--WIP--
	*/
	int fatoracaoFermat(int inteiroImpar){
		int x = sqrt(inteiroImpar);

		if(inteiroImpar == x*x){
			System.out.println(x + " é fator de "+ inteiroImpar);
		}else{
			while((divisao(y,) != 0) || (x != (inteiroImpar + 1)/2)){
				x ++;
				int y = sqrt((x*x) - inteiroImpar);
			}

		}

	}
	// --WIP--
	public static void main(String[] args){

		Scanner sc = new Scanner(System.in);
		System.out.println("Digite dois inteiros(aperte enter ao escolher o primeiro):");
		primeiro = sc.nextInt();
		segundo = sc.nextInt();
		sc.close();

		if(primeiro < 0 || segundo < 0){
			System.out.println("Valores inválidos, programa terminando");
			return 1;
		}

		int []primos = {97, 89, 83, 79, 73, 71, 67, 61, 59, 53, 47, 43, 41, 37, 31, 28, 23, 19, 17, 13, 11, 7, 5, 3, 2};
		// N == primos.lenght
		int aux = 0;
		int []d1 = new int[N];
		int []d2; = new int[N];

		
		if(primeiro > segundo){
			while(aux < N){
				if(divisao(primeiro, primo[aux]) != 0){
					aux ++;

				}else{
					// divisores do primeiro
					d1[aux] = divisao(primeiro, primo[aux]);
				}
			}
		}else{
			while(aux < N){
				if(divisao(segundo, primo[aux]) != 0){
					aux ++;

				}else{
					// divisores do segundo
					d2[aux] = divisao(segundo, primo[aux]);
				}
			}

		}

		int maior = 0;

		for(aux = 0; aux < N; aux++){

		}

	}
}
