package principal;

import dominio.*;

public class App {
    public static void main(String[] args) {

        Profesor profesor1 =  new Profesor("Matias", "Macrino",234);
        System.out.println("Soy un profesor " + profesor1.getNombreApellido());

        Alumno ignacio = new Alumno("Ignacio","Juarez", "ignaciojuarez");

        Nota nota1 = new Nota(9, "Primer cuatrimestre");
        Nota nota2 = new Nota(10, "Segundo cuatrimestre");

        ignacio.setCuatrimestre1(nota1);
        ignacio.setCuatrimestre2(nota2);

        System.out.println(ignacio);
        System.out.println("Y el promedio es de " + ignacio.calcularPromedio());

        //Para poder "Darle vida" a una clase (Instanciar)
        //Creamos objetos
        //Un objeto se crea SIEMPRE con el operador new
        Persona persona1 = new Persona("Santiago", "Mercado");
        Persona persona2 = new Persona();

        //persona1.setNombre("Santiago");
        //persona1.setApellido("Mercado");
        persona2.setNombre("Santiago");
        persona2.setApellido("Ortiz");

        System.out.println("¿Ambos objetos son lo mismo?");
        System.out.println(persona1 == persona2);

        //System.out.println("Conociendo los object Id de cada persona:");
        System.out.println(persona1.toString());
        System.out.println(persona2);
    }
}
