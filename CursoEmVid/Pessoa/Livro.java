import java.util.Random;
public class Livro implements Publicacao{
    private String titulo;
    private String autor;
    private int totPaginas;
    private int pagAtual;
    private Pessoa leitor;
    private boolean aberto;

    public Livro(String titulo, String autor, int totPaginas, Pessoa leitor){
        this.titulo = titulo;
        this.autor = autor;
        this.totPaginas = totPaginas;
        this.leitor = leitor;
    }

    public String getTitulo() {
        return titulo;
    }

    public String getAutor() {
        return autor;
    }

    public Pessoa getLeitor() {
        return leitor;
    }

    public int getTotPaginas() {
        return totPaginas;
    }

    public int getPagAtual() {
        return pagAtual;
    }

    public void setPagAtual(int pagAtual) {
        this.pagAtual = pagAtual;
    }

    public boolean isAberto() {
        return aberto;
    }

    public void setAberto(boolean aberto) {
        this.aberto = aberto;
    }

    public String detalhes() {
        return "Livro{" +
                "titulo='" + titulo + '\'' +
                ", autor='" + autor + '\'' +
                ", totPaginas=" + totPaginas +
                ", pagAtual=" + pagAtual +
                ", leitor=" + leitor.getNome() +
                ", aberto=" + aberto +
                '}';
    }

    // Métodos abstratos
    @Override
    public void abrir(){
        setAberto(true);
    }

    @Override
    public void fechar(){
        setAberto(false);
    }

    @Override
    public void folhear(){
        Random folheia = new Random();
        int paginaSorteada = folheia.nextInt(this.totPaginas);
        setPagAtual(paginaSorteada);
    }

    @Override
    public void avancarPag(){
        setPagAtual(getPagAtual() + 1);
    }

    @Override
    public void voltarPag(){
        setPagAtual(getPagAtual() - 1);
    }

}