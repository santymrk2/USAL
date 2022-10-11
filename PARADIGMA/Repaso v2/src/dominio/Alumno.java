package dominio;

public class Alumno extends Persona {

    private String userPortal;

    //Composición/Agregración
    private Nota cuatrimestre1;

    //Composición/Agregración
    private Nota cuatrimestre2;

    public Alumno(String nombre, String apellido, String userPortal) {
        super(nombre, apellido);
        this.userPortal = userPortal;
    }

    public String getUserPortal() {
        return userPortal;
    }

    public void setUserPortal(String userPortal) {
        this.userPortal = userPortal;
    }

    public Nota getCuatrimestre1() {
        return cuatrimestre1;
    }

    public void setCuatrimestre1(Nota cuatrimestre1) {
        this.cuatrimestre1 = cuatrimestre1;
    }

    public Nota getCuatrimestre2() {
        return cuatrimestre2;
    }

    public void setCuatrimestre2(Nota cuatrimestre2) {
        this.cuatrimestre2 = cuatrimestre2;
    }

    //Comportamiento para el alumno
    public double calcularPromedio(){
        return (this.cuatrimestre1.getNro() + this.cuatrimestre2.getNro()) / 2;
    }

    @Override
    public String toString() {
        return super.toString() + " userPortal: " + this.userPortal ;
    }
}
