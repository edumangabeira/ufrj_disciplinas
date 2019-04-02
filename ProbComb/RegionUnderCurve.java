import java.util.Scanner
public class RegionUnderCurve{

	float a = 0;
	float b = 1;
	float axisX = this.b-this.a;
	float axisY = b-a;


	void region(float func, float params){
		System.println.out("Deseja adicionar um novo domínio?
						(padrão:[0,1]).
						1-sim 2-não");
		Scanner sc = Scanner()
		if(sc.nextChar() != sim){
			System.println.out("Digite o novo domínio, inferior
								e superior de forma respectiva.")
			this.a = sc.next.float();
			this.b = sc.next.float(); 
		}

		func = params;
		lenght = this.b - this.a;
		for(i=0; i<lenght;i++){
			func[params] = func[params] + 1;
		}
	}
}