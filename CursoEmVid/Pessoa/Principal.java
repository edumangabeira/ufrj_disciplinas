public class Principal{
    public static void main(String args[]){
        Pessoa jamelao = new Pessoa("Jamelão", "masculino", 13);
        Livro hp = new Livro("Harry Potter","J.K. Rowling", 240, jamelao);

        hp.abrir();
        hp.folhear();
        int i=0;
        while (i<6) {
            hp.avancarPag();
            i++;
        }
        hp.voltarPag();

        System.out.println(hp.detalhes());

        hp.fechar();

        System.out.println(hp.detalhes());

    }
}