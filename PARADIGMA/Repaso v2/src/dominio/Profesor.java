package dominio;

public class Profesor extends Persona {

    //Atributos
    private int legajo;

    //Constructor
    public Profesor(String nombre, String apellido, int legajo) {
        super(nombre, apellido);
        this.legajo = legajo;
    }

    //Getters y setters
    public int getLegajo() {
        return legajo;
    }

    public void setLegajo(int legajo) {
        this.legajo = legajo;
    }
}
