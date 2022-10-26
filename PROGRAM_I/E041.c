#include <stdio.h>
#include <stdlib.h>

int leerCant() {
    int a;
    do{
        puts("Ingrese la cantidad: ");
        scanf("%d", &a);
        if(a<0)puts("Error, intente de nuevo");
    } while (a<0);
    return a;
}

void averiguarMinMax(int cant) {
    int* conj = (int*) malloc(cant*sizeof(int));
    cargarNum(conj, N);
    return;
}

void MinMax (int *conj, int n, int *puntMin, int *puntMax) {
    printf("El maximo es: %d", *puntMax);
    printf("El maximo es: %d", *puntMin);
    return;
}


int main() {
    int N = leerCant();

    averiguarMinMax(N);
    return 0;
}

