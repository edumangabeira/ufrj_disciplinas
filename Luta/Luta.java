import java.util.Random;
public class Luta{

    /** public Lutador(String nome, String sobrenome, String apelido, String nacionalidade,
     String categoriaAtual, float altura, int idade, int vitorias, int derrotas, int empates)*/

    int rounds;
    boolean aprovada;
    Lutador desafiante;
    Lutador desafiado;

    public Luta(int rounds, Lutador desafiado, Lutador desafiante){
        this.rounds = rounds;
        this.desafiado = desafiado;
        this.desafiante = desafiante;
    }

    public void lutar(){
        // checando se existe alguma irregularidade na luta
        if(desafiado.categoriaAtual != desafiante.categoriaAtual){
            System.out.println("Classes de peso distintas, luta cancelada.");
            return 1;
        }
        aprovada = desafiado.checarPeso();
        if (aprovada == False){
            return 1;
        }
        aprovada = desafiante.checarPeso();
        if (aprovada == False) {
            return 1;
        }

        // apresentação dos lutadores
        desafiante.apresentar();
        desafiado.apresentar();

        Random vencedor = new Random();
        int resultado = vencedor.NextInt((3-0)+1,0);
        if(resultado == 0){
            System.out.println("O desafiante" + desafiante.apelido + " venceu");
            desafiante.setVitorias(desafiante.vitorias+1);
            desafiado.setDerrotas(desafiado.derrotas+1);
        }else if (resultado == 1){
            System.out.println("O desafiado" + desafiado.apelido + " venceu");
            desafiado.setVitorias(desafiado.vitorias+1);
            desafiante.setDerrotas(desafiante.derrotas+1);

        }else{
            System.out.println("Houve um empate!");
            desafiado.setEmpates(desafiado.empates+1);
            desafiante.setEmpates(desafiante.empates+1);
        }

    }

}