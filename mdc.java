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

	static int N = 26;


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
	*/
	int fatoracaoIngenua(int inteiro){
		int f = 2;
		if(divisao(inteiro, f)){
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

	public static void main(String[] args){

		Scanner sc = new Scanner(System.in);
		System.out.println("Digite dois inteiros(aperte enter ao escolher o primeiro):");
		String primeiro = sc.next();
		String segundo = sc.next();
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
