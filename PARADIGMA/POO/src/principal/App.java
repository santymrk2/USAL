package principal;


import domain.*;


public class App {

    public static void main(String[] args) throws Exception {

        //Constructor por defecto...

        Taxi taxi = new Taxi();

        //Si quiero actualizar datos, USO SET!!!

        taxi.setCiudadDestino("Pilar");

        taxi.setCiudadOrigen("Zelaya");

        taxi.setEncendido(true);

        taxi.setKmRecorridos(10);


        //Si quiero LEER datos, USO EL GET

        System.out.println("Ciudad origen: " + taxi.getCiudadOrigen());

        System.out.println("Ciudad destino: " + taxi.getCiudadDestino());

        System.out.println("Encendido?: " + taxi.isEncendido());

        System.out.println("km recorridos?: " + taxi.getKmRecorridos());


        Taxi taxi2 = new Taxi();

        System.out.println(taxi2);

    }

}