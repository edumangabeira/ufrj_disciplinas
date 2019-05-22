public class Galaxy extends Smartphone{

    @Override
    public void enviarSMS(Celular celular, String mensagem){
        System.out.println("Enviando mensagem para " + celular.getNumeroPessoal())
        System.out.println("Mensagem enviada do meu Samsung Galaxy.");
        celular.setUltimaMensagem(mensagem);
    }

}