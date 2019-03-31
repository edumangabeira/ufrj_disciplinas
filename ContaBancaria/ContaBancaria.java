public class ContaBancaria{
	
	public static void main(String[] args){

		boolean stop;
		Conta conta;
		// fazer vetor de ponteiros apontando pra cada instância da classe conta
		conta = new Conta();
		for (int i=0; i<n; i++){
			switch(conta[i]){
				case 1:
					System.out.println("Conta corrente");
					break;

				case 2:
					System.out.println("Conta poupança");
					break;

				case 3:
					System.out.println("conta salário");
					break;
				default:
					System.out.printf("Conta inválida");
					stop = true;
					break;
			}
			if(!stop)
				conta.userData(numero, saldo, cliente, limite);
		}
		
	}
}