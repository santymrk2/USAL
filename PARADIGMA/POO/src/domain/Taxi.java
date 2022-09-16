package domain;

public class Taxi {
    private String ciudadOrigen;

    private String ciudadDestino;

    private int kmRecorridos;

    private boolean encendido;

    public String getCiudadOrigen() {
        return ciudadOrigen;
    }

    public void setCiudadOrigen(String ciudadOrigen) {
        this.ciudadOrigen = ciudadOrigen;
    }

    public String getCiudadDestino() {
        return ciudadDestino;
    }

    public void setCiudadDestino(String ciudadDestino) {
        this.ciudadDestino = ciudadDestino;
    }

    public int getKmRecorridos() {
        return kmRecorridos;
    }

    public void setKmRecorridos(int kmRecorridos) {
        this.kmRecorridos = kmRecorridos;
    }

    public boolean isEncendido() {
        return encendido;
    }

    public void setEncendido(boolean encendido) {
        this.encendido = encendido;
    }


    //ENCAPSULAMIENTO: ocultar los detalles de implementacion
    //atributo privado +
    //GET
    //metodo para obtener cada atributo
    //SET
    //Metodo para setear cada atributo
    //Los 3 elementos juntos se denominan PROPERTY
}