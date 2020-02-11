import java.util.Scanner;
public class ContaBancaria{

	public static void main(String[] args){
		Conta conta1 = new Conta(1984, "Juniper");
		conta1.setSenha(1000);
		Conta conta2 = new Conta(2047, "Gulliger");

		Scanner sc = new Scanner(System.in);
		int contSenhasInvalidas = 0;

		while(true){
			System.out.println("Digite o valor a ser sacado:");
			float valor = sc.nextFloat();
			System.out.println("Digite a senha da conta");
			int senha = sc.nextInt();
			try{
				conta1.sacar(valor,senha);
			}catch(SenhaInvalidaException e){
				System.out.println(e.getMessage());
				contSenhasInvalidas++;

				if(contSenhasInvalidas == Conta.MAX_SENHAS_INVALIDAS){
					System.out.println("Conta bloqueada.");
					break;
				}

			}catch(SaldoInsuficienteException e){
				System.out.println(e.getMessage());
			}
		}
		System.out.println("Tchau :)");
	}
}
