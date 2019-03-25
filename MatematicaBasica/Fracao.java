public class Fracao{

	int numerador;
	int denominador;
	boolean positiva;
	float Valornumerico;
	Fracao fracaoIrredutivel;


	// método especial: o construtor de classes
	public Fracao(){
		this.numerador = 0;
		this.denominador = 1;
		this.positiva = true;
	}


	// outro construtor
	public Fracao(int numerador, int denominador, boolean sinal){
		this.numerador = numerador;
		this.denominador = denominador;
		this.positiva = sinal;
	}

	/*estamos redeclarando um método que já existe numa
	numa classe ancestral */
	@Override
	public String toString(){
		return (this.positiva ? "" : "-") + 
				this.numerador + 
				(this.denominador == 1 ? "" : "/" + this.denominador); 
	}

}