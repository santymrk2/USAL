#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define P 5

/*
Dado un vector de 5 posiciones (cargado con números random entre 0 y 50), 
ingresar por pantalla un número y verificar si está o no en el vector.
Si adiviné, mostrar la posición donde está.Si no adiviné, mostrar un mensaje de error.
Validar que el número ingresado sea entre 1 y 50. 
Utilizar búsqueda SECUENCIAL en una función que devuelva la posición donde está o -1si no está.
*/

    
void fillArray(int a[]) {
    for(int i=0; i<P; i++) {
        a[i] = rand();
    }
    return;
}

int inNum() {
    puts("");
}

int main(){
    int arr[P];
    srand(time(NULL));
    fillArray(arr);
    inNum();
    return 0;
}