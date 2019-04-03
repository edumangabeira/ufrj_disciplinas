public class Conta{

	private String nomeDoTitular;

	private float saldo;

	private int senha;

	public static final int LIMITE_CHEQUE_ESPECIAL = 900;

	public static final int MAX_SENHAS_INVALIDAS = 3;

	private final int numeroDaConta;

	public Conta(int numeroDaConta, String nomeDoTitular) {
        this.numeroDaConta = numeroDaConta;
        this.nomeDoTitular = nomeDoTitular;
    }
	public float getSaldo(){
		return this.saldo;
	}

	public void setSenha(int senha){
		this.senha = senha;
	}

	public void sacar(float valor, int senha)
		throws SenhaInvalidaException, SaldoInsuficienteException {

	        if(valor <= 0){
	            throw new IllegalArgumentException(
	                    "O valor sacado deve ser positivo");
	        }

	        if(senha != this.senha){
	            throw new SenhaInvalidaException(senha);
	        }

	        if(this.saldo + LIMITE_CHEQUE_ESPECIAL < valor) {
	            throw new SaldoInsuficienteException(this.saldo);
	        }

		this.saldo -= valor;
	}	

	public void depositar(float valor) {
        if (valor <= 0) {
            throw new IllegalArgumentException(
                    "O valor depositado deve ser positivo");
        }
        this.saldo += valor;
    }

    public void transferir(float valor,
                           Conta contaDestino,
                           int senha) throws SenhaInvalidaException, SaldoInsuficienteException {
        sacar(valor, senha);
        contaDestino.depositar(valor);
        System.out.println("Operação autorizada pela instituição");
    }
}
