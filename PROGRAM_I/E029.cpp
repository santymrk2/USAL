#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#define P 5
#define MIN 0
#define MAX 50


/*
Dado un vector de 5 posiciones (cargado con números random entre 0 y 50),
ingresar por pantalla un número y verificar si está o no en el vector.
Si adiviné, mostrar la posición donde está.Si no adiviné, mostrar un mensaje de error.
Validar que el número ingresado sea entre 0 y 50.
Utilizar búsqueda SECUENCIAL en una función que devuelva la posición donde está o -1si no está.
*/


void fillArray(int a[]) {
    for(int i=0; i < P; i++) {
        a[i] = rand() * (MAX - MIN) + MIN;
    }
    return;
}

int inNum() {
    int n;
    do{
        printf("Ingrese un numero entre %d y %d ", MIN, MAX);
        scanf("%d", &n);
        fflush(stdin);
        if(n>50 && n<0) puts("Error, intente nuevamente\n");
    } while (n>50 && n<0);
    return n;
}

int esta(int v[], int n){
    int encontre = -1;
    int izq=0, der=P-1, mitad;
    while ((izq<=der)&&(encontre==-1)){
        mitad = trunc((izq + der)/2);
        if (v[mitad]==n) encontre = mitad;
        else
            if (n < v[mitad]) der = mitad -1;
            else izq = mitad + 1;
    }
    return encontre;
}


int main(){
    int arr[P];
    srand(time(NULL));
    fillArray(arr);
    printf("Ubicacion en el array (-1 = no se encuentra): %d", esta(arr, inNum()));
    return 0;
}