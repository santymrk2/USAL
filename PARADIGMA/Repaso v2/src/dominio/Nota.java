package dominio;

public class Nota {

    private double nro;

    private String descripcion;

    public Nota(double nro, String descripcion) {
        this.nro = nro;
        this.descripcion = descripcion;
    }

    //En el uso de get y set, se pueden aplicar particularidades sobre los datos...
    public double getNro() {
        return nro * 10;
    }

    public void setNro(double nro) {
        this.nro = nro;
    }

    public String getDescripcion() {
        return descripcion;
    }

    public void setDescripcion(String descripcion) {
        this.descripcion = descripcion;
    }
}
