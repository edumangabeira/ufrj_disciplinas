public class Pessoa{
    private String nome;
    private String sexo;
    private int idade;

    public Pessoa(String nome, String sexo, int idade){
        this.nome = nome;
        this.sexo = sexo;
        this.idade = idade;
    }

    public String getNome() {
        return nome;
    }

    public String getSexo() {
        return sexo;
    }

    public int getIdade() {
        return idade;
    }

    public void FazerAniver(){
        System.out.println("Parabén pra você "+ this.nome +"!!!!!");
        this.idade = this.idade + 1;

    }
}