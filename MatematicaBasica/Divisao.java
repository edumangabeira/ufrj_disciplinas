public class Divisao{

	int quociente, resto;

	public Divisao(int dividendo, int divisor){
		this.resto = dividendo;
		this.quociente = 0;
		while(true){
			if(resto < divisor){
				// System.out.println("O quociente é:" + this.quociente);
				break;
			}else{
				this.resto = this.resto - divisor;
				this.quociente += 1;
			}
		}
		System.out.println("O quociente é:" + this.quociente);
		System.out.println("O resto é:" + this.resto);
	}
}