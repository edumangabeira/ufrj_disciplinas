import java.util.Random
// import java.lang.Math
public class MonteCarlo{

	// gera ponto aleatório no plano
	float x, y;
	Random point = new Random()
	x = point.nextFloat();
	y = point.nextFloat();

	// define área do plano
	RegionUnderCurve area = new RegionUnderCurve()
	area.point(x,y);
	// y == x*x;
	

	public static void main(String[] args){

	}
}