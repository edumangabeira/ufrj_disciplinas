public class Principal{

    /**
     * public Lutador(String nome, String sobrenome, String apelido, String nacionalidade,
     String categoriaAtual, double altura, int idade, int vitorias, int derrotas, int empates);
     * public Categoria(String categoria);
     * public Luta(int rounds, Lutador desafiado, Lutador desafiante, Categoria categoria);
     */

    public static void main(String[]args){
        Lutador desafiado = new Lutador("Manoel", "Osório", "Corcunda","Brasileiro", "Pena", 1.70, 26, 22, 3, 2);
        Lutador desafiante = new Lutador("Melquiades","El Alquimista", "Garcia", "Espanhol", "Pena", 1.68, 22, 12, 1, 0);
        Categoria categoria = new Categoria("pena");
        Luta luta = new Luta(12, desafiado, desafiante, categoria);
        luta.lutar();

    }
}