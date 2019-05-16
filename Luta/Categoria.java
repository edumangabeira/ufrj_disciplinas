public class Categoria {

    private static final String pena = "pena";
    private static final String leve = "leve";
    private static final String meioMedio = "meioMedio";
    private static final String medio = "medio";
    private static final String meioPesado = "meioPesado";

    public String getCategoria(float peso) { // peso em lb
        if (peso > 120 && peso <= 126) {
            return this.pena;
        } else if (peso > 126 && peso <= 135) {
            return this.leve;
        } else if (peso > 135 && peso <= 147) {
            return this.meioMedio;
        } else if (peso > 147 && peso <= 161) {
            return this.medio;
        } else if (peso > 161 && peso <= 175) {
            return this.meioPesado;
        } else {
            return "Sem categoria";
        }
    }
}