public class MatematicaBasica{

	public static void main(String[] args){

		int numero; // int é zero por default
		Fracao x; // uma classe, nesse momento é null por default
		x = new Fracao(); // instanciando x

		
		Fracao y = new Fracao(2, 5, true);

		System.out.println("DIVISAO");
		Divisao n = new Divisao(5, 2);
		System.out. println("--------------------------------------");
		System.out.println("FRACAO");
		System.out.println(x.toString());
		System.out.println(y);
	}
}