public class Motorola extends FeaturePhone{

    @Override
    public void fazerLigacao(Celular celular) {
        numero = celular.getNumeroPessoal();
        System.out.println("Chamando........");
        System.out.println("HELLO MOTO");
        System.out.println("Você ligou para o número: " + numero);
        System.out.println("Chamada finalizada");
    }

}