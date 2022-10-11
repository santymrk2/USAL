package domain;

public class Taxi {

    //1) Primero definir variables -> Atributos privados...
    private String ciudadOrigen;

    private String ciudadDestino;

    private int kmRecorridos;

    private boolean encendido;

    //2) Definir constructores
    //No es más válido el constructor por defecto...
    /*public Taxi(){
        System.out.println("Constructor por defecto (Sin argumentos)");
    }*/

    public Taxi(String ciudadDestino){
        this.ciudadDestino = ciudadDestino;
    }

    public Taxi(String ciudadOrigen, String ciudadDestino){
        this(ciudadDestino);//Invocar constructor "más livianos" para evitar duplicar código
        this.ciudadOrigen = ciudadOrigen;
    }

    public Taxi(String ciudadOrigen, String ciudadDestino, int kmRecorridos, boolean encendido) {
        this(ciudadOrigen, ciudadDestino);//Invocar constructor "más livianos" para evitar duplicar código
        this.kmRecorridos = kmRecorridos;
        this.encendido = encendido;
    }

    //3) Definir getters y setters

     //ENCAPSULAMIENTO: Ocultar los detalles de implementación
    // MAYOR SEGURIDAD!
    //Atributo privado +
    //GET +
    //Método para obtener cada atributo
    //SET +
    //Método para setear cada atributo
    //Los 3 elementos juntos se denominan PROPERTY    

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

    private void setKmRecorridos(int kmRecorridos) {
        this.kmRecorridos = kmRecorridos;
    }

    public boolean isEncendido() {
        return encendido;
    }

    public void setEncendido(boolean encendido) {
        this.encendido = encendido;
    }
  
    //4) Definir métodos de la clase
    public void avanzar(int km){
        //Aplico una regla de negocio, donde puedo asignar los km cuando el vehículo está en marcha
        if(isEncendido()){
            setKmRecorridos(km);
        }
        else{
            System.out.println("El vehículo está detenido. Verificar!");
        }
    }

    public void resetViajes(){
        this.setCiudadDestino("");
        this.setCiudadOrigen("");
        this.setEncendido(false);
        this.setKmRecorridos(0);
    }

    public void nuevoViaje(String origen, String destino){
        this.ciudadOrigen = origen;
        this.ciudadDestino = destino;
    }
}
