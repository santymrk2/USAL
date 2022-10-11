package principal;

import domain.*;

public class App {
    public static void main(String[] args) {
        
        //Constructor por defecto...
        Taxi taxi = new Taxi("Pilar", "Zelaya");
        //Si quiero actualizar datos, USO SET!!!
        //taxi.setCiudadDestino("Pilar");
        //taxi.setCiudadOrigen("Zelaya");
        //taxi.setEncendido(true);
        //taxi.setKmRecorridos(10);

        taxi.avanzar(20);
        System.out.println("Mostrando km recorridos: " + taxi.getKmRecorridos());
        taxi.setEncendido(true);
        taxi.avanzar(20);
        System.out.println("Mostrando km recorridos: " + taxi.getKmRecorridos());

        taxi.resetViajes();
        taxi.nuevoViaje("Tigre", "Boulogne");

        //Si quiero LEER datos, USO EL GET
        System.out.println("Ciudad origen: " + taxi.getCiudadOrigen());
        System.out.println("Ciudad destino: " + taxi.getCiudadDestino());
        System.out.println("Encendido?: " + taxi.isEncendido());
        System.out.println("km recorridos?: " + taxi.getKmRecorridos());

        Taxi taxi2 = new Taxi("San Isidro", "Pilar", 30, false);
        System.out.println("Ciudad origen: " + taxi2.getCiudadOrigen());
        System.out.println("Ciudad destino: " + taxi2.getCiudadDestino());
        System.out.println("Encendido?: " + taxi2.isEncendido());
        System.out.println("km recorridos?: " + taxi2.getKmRecorridos());

        Taxi taxi3 = new Taxi("La Plata");
        System.out.println(taxi3);
    }
}
