/*
Eduardo Freire Mangabeira
Github: edumangabeira
Data: 11/Mar/2019
Entrada: Gastos de uma empresa em três meses
Saída: Balanço no trimestre
*/

class BalancoTrimestral{
	public static void main(String[] args){
		int gastosJaneiro = 15000;
		int gastosFevereiro = 23000;
		int gastosMarço = 17000;
		int gastosTrimestre = gastosJaneiro + gastosFevereiro + gastosMarço;
		System.out.println("O gasto total no trimestre foi de: " + gastosTrimestre + " reais.");

		int mediaMensal = gastosTrimestre/3;
		System.out.println("A media mensal de gastos foi de: " + mediaMensal + " reais.");

	}
}