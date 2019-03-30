public class Operacoes{

	int numero;
	String cliente;
	float saldo;
	float limite;

	public userData(){
		this.numero = 0
		this.cliente = "user"
		this.saldo = 0
		this.limite = 990 // salario minimo

	}

	public userData(int numero, float saldo, String cliente, float limite){
		this.numero = numero
		this.saldo = saldo
		this.cliente = cliente
		this.limite = limite
	}

	// saca	uma	quantidade x
	public static void saque(float valor){
		if(valor < this.saldo){
			this.saldo = this.saldo - valor;
			System.out.println("Operação autorizada pela instituição");
			System.out.println("Por favor retire seu dinheiro")
		}
	}

	// deposita uma quantidade x
	public static void deposito(){

	}

	// devolve o saldo atual
	public static void saldo(){

	}

	// transfere uma quantidade x para uma outra conta y
	public static void transfere(){

	}

	// imprime o nome do titular da conta
	public static void nomeTitular(){

	}

	// devolve o tipo de conta
	public static void tipoConta(){

	}

}