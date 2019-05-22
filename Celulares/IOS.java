public class Ios extends Smartphone {

    @Override
    public void playVideo(Celular celular){
        String modelo = celular.getModelo();
        if(modelo =="Iphone3") {
            System.out.println("formato usado: .mp4");
        }else if(modelo =="Iphone4") {
            System.out.println("formato usado: .avi");
        }else{
            System.out.println("formato usado: .mov");
        }
    }

}