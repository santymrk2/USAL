package dominio;

//CLASE -> ABSTRACCIÓN
public class Persona {

    //#region Atributos

    //atributos
    //La suma de los atributos se conoce como IDENTIDAD (Clases y objetos)
    //ESTADO (Objetos): Ejecución (Dinámica), Tenemos un ciclo de vida (Objetos)
    //Los valores que toman los atributos en un instante de tiempo (FOTO)
    private String nombre;

    private String apellido;

    //#endregion

    //#region Constructores
    //Constructor: Un método ESPECIAL que no tiene retorno (En realidad, retorna una instancia)
    //y tiene el mismo nombre de la propia clase
    public Persona(){
        System.out.println("Estoy construyendo una persona...");
    }

    public Persona(String nombre, String apellido) {
        this.nombre = nombre;
        this.apellido = apellido;
    }

    //#endregion

    //#region Properties
    //Encapsulamiento desde JAVA (Property)
    //1) Definir atributos privados
    //2) Generar get público (Permite retornar el valor de un att)
    //3) Generar set público (Permite insertar o actualizar el valor de un att)

    public String getNombre() {
        return nombre;
    }

    public void setNombre(String nombre) {
        this.nombre = nombre;
    }

    public String getApellido() {
        return apellido;
    }

    public void setApellido(String apellido) {
        this.apellido = apellido;
    }

    //#endregion

    //#region Comportamiento
    //Comportamiento (Clases y objetos) -> Aquelas acciones que se pueden realizar
    //Por lo general modifican el ESTADO de un objeto

    public String getNombreApellido(){
        return nombre + " " + apellido;
    }


    //Se recomiendo sobreescribir el método toString()

    @Override
    public String toString() {
        //super hace referencia a mi clase base/padre (Object)
        return "Soy una persona con nombre: " + this.nombre + ", apellido: " + this.apellido;
    }

    /*
     * IDENTIDAD (Clases y objetos)
     * COMPORTAMIENTO (Clases y objetos)
     * ESTADO (Objetos)
     */

    //#endregion
}
