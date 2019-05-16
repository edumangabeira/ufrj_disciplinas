public class Lutador{
    private String nome;
    private String sobrenome;
    private String apelido;
    private String nacionalidade;
    private String categoriaAtual;
    private float altura;
    private int idade;
    private Categoria categoria;
    private int vitorias;
    private int derrotas;
    private int empates;

    public Lutador(String nome, String sobrenome, String apelido, String nacionalidade,
                   String categoriaAtual, float altura, int idade, int vitorias, int derrotas, int empates){
        this.nome = nome;
        this.sobrenome = sobrenome;
        this.apelido = apelido;
        this.nacionalidade = nacionalidade;
        this.categoriaAtual = categoriaAtual.toLowerCase();
        this.altura = altura;
        this.idade = idade;
        this.vitorias = vitorias;
        this.derrotas = derrotas;
        this.empates = empates;
    }

    public void setVitorias(int vitorias) {
        this.vitorias = vitorias;
    }

    public void setEmpates(int empates) {
        this.empates = empates;
    }

    public void setDerrotas(int derrotas) {
        this.derrotas = derrotas;
    }

    public boolean checarPeso(){
        if(this.categoriaAtual != categoria.getCategoria(this.categoriaAtual)){
            System.out.println("O lutador" + this.nome + " " + this.sobrenome + "não passou na pesagem, luta cancelada.");
            return false;
        }else{
            System.out.println("Peso de acordo com a categoria.");
            return true;
        }
    }

    public void apresentar(){
        System.out.println(this.nome + " ' " + this.apelido + " ' " + this.sobrenome);
    }

    public void treinar(int tempo){
        assert true;
    }

}