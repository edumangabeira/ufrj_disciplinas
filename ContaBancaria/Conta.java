public class Conta{

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
			System.out.println("Por favor retire seu dinheiro");
		}
	}

	// deposita uma quantidade x
	public static void deposito(float valor){
		this.saldo = this.saldo + valor;
		System.out.println("Depositado com sucesso - Valor "+valor
						  + "R$");
	}

	
	// como usar lambda???(precisa?)
	/*
	Saldo -> this.saldo
	
	// devolve o saldo atual
	public static int saldo(){
		return this.saldo

	}
	*/

	// transfere uma quantidade x para uma outra conta y
	public static void transfere(float valor, Conta conta){
		this.saldo = this.saldo - valor;
		conta.saldo = conta.saldo + valor;
		System.in.println("Operação realizada com sucesso");
	}

	// imprime o nome do titular da conta
	public static void nomeTitular(){
		System.in.println(this.cliente);
	}

	// devolve o tipo de conta
	public static void tipoConta(){

	}

}