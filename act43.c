#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define LN 5

int main() {
    char sport[LN];
    int kids[LN], canTeach = 0;
    for(int i=0; i<LN; i++){
        puts("Enter the first letter of the sport: ");
        fflush(stdin);
        scanf("%s", &sport[i]);
        puts("Enter the number of kids");
        do {
            fflush(stdin);
            scanf("%d", &kids[i]);
            if(kids[i]<0) {
                puts("Enter a number major to 0 or 0");
            }
        } while (kids[i]<0);
    }
    puts("Sport    Kids     Teachers");
    for(int i=0; i<LN; i++) {
        if(kids[i]>=10) {
            canTeach=kids[i]/10;
        } else if (kids[i]<10 && kids[i]>0) {
            canTeach=1;
        }
        else canTeach=0;
        printf("%c        %d         %d\n", sport[i], kids[i], canTeach);
    }
    return 0;
}


//En un club de barrio, los chicos practican cinco deportes. Se ingresará por teclado toda la información de cada uno de estos deportes: nombre del deporte y cuántos chicos lo practican. 
//Al terminar la carga, se mostrará por pantalla toda la información cargada en dos columnas. Además, mostrar cuántos chicos hay en total y cuál es el deporte con menos jugadores.
//Utilizar dos vectores. El vector de deportes tendrá sólo la letra inicial (por ej: futbol -- F). El vector con la cantidad de chicos, no puede contener valores negativos, sí puede tener 0 si no hay chicos inscriptos.
//Desafío extra: mostrar una tercera columna con la cantidad de profesores necesarios si se estima el ratio de 1 profesor cada 10 chicos máximo. Para 10, 1 profesor. Para 22, 3 profesores.

