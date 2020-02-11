public class Lutador{
    private String nome;
    private String sobrenome;
    private String apelido;
    private String nacionalidade;
    private String categoriaAtual;
    private double altura;
    private int idade;
    private int vitorias;
    private int derrotas;
    private int empates;

    public Lutador(String nome, String sobrenome, String apelido, String nacionalidade,
                   String categoriaAtual, double altura, int idade, int vitorias, int derrotas, int empates){
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

    public void showCard(){
        System.out.println("Lutador: " + this.nome + this.apelido + this.sobrenome );
        System.out.println("Nacionalidade: " + this.nacionalidade);
        System.out.println("Categoria de Peso: " + this.categoriaAtual);
        System.out.println("Altura: " + this.altura);
        System.out.println("Idade: "+ this.idade);
        System.out.println("Placar: "+vitorias+"W-"+derrotas+"L-"+empates+"D");
    }

    public String getNome() {
        return this.nome;
    }

    public String getSobrenome() {
        return this.sobrenome;
    }

    public String getApelido() {
        return this.apelido;
    }

    public String getCategoriaAtual() {
        return this.categoriaAtual;
    }

    public int getVitorias() {
        return this.vitorias;
    }

    public int getDerrotas() {
        return this.derrotas;
    }

    public int getEmpates() {
        return this.empates;
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

    public void apresentar(){
        System.out.println(this.nome + " ' " + this.apelido + " ' " + this.sobrenome);
    }

    public void treinar(int tempo){
        assert true;
    }

}