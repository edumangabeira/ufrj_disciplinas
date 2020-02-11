import java.lang.Math;
public class Luta{

    /** public Lutador(String nome, String sobrenome, String apelido, String nacionalidade,
     String categoriaAtual, double altura, int idade, int vitorias, int derrotas, int empates)*/

    int rounds;
    boolean aprovada;
    Lutador desafiante;
    Lutador desafiado;
    Categoria categoria;

    public Luta(int rounds, Lutador desafiado, Lutador desafiante, Categoria categoria){
        this.rounds = rounds;
        this.desafiado = desafiado;
        this.desafiante = desafiante;
        this.categoria = categoria;
    }

    public void lutar(){
        // checando se existe alguma irregularidade na luta
        System.out.println(desafiado.getCategoriaAtual());
        System.out.println(desafiante.getCategoriaAtual());
        if(!(desafiado.getCategoriaAtual().equals(desafiante.getCategoriaAtual()))){
            System.out.println("Classes de peso distintas, luta cancelada.");
            return;
        }
        // checagem de peso
        /**
         * Trocar o @param peso para double em vez de retorar uma categoria String.
         * 1) O método deve conferir se o peso bate com a categoria mais recente do lutador;
         * 2) OU o método confere se o lutador tem o peso da categoria escolhida na luta.
         * */
        if(!(desafiante.getCategoriaAtual().equals(categoria.getCategoria()))){
            System.out.println("O lutador" + desafiante.getNome() + " " + desafiante.getSobrenome() + "não passou na pesagem, luta cancelada.");
            return;
        }else if(!(desafiado.getCategoriaAtual().equals(categoria.getCategoria()))){
            System.out.println("O lutador" + desafiado.getNome() + " " + desafiado.getSobrenome() + "não passou na pesagem, luta cancelada.");
            return;
        }else{
            System.out.println("Peso de acordo com a categoria.");
        }

        // apresentação dos lutadores
        desafiante.apresentar();
        desafiado.apresentar();

        double vencedor = (int)(Math.random()*((2-0)+1))+0;

        if(vencedor == 0.0){
            System.out.println("O desafiante" + desafiante.getApelido() + " venceu");
            desafiante.setVitorias(desafiante.getVitorias()+1);
            desafiado.setDerrotas(desafiado.getDerrotas()+1);
        }else if (vencedor == 1.0){
            System.out.println("O desafiado" + desafiado.getApelido() + " venceu");
            desafiado.setVitorias(desafiado.getVitorias()+1);
            desafiante.setDerrotas(desafiante.getDerrotas()+1);

        }else{
            System.out.println("Houve um empate!");
            desafiado.setEmpates(desafiado.getEmpates()+1);
            desafiante.setEmpates(desafiante.getEmpates()+1);
        }

        desafiante.showCard();
        desafiado.showCard();


    }

}