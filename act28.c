#include <stdio.h>
#include <stdlib.h>
#define Q 15

int main(){
    float array[Q];
    for(int i=0; i<Q; i++){
        array[i] = rand();
        printf("%.2f \n", array[i]);
    }
    return 0;
}


//Mostrar un array completo Recorrer todo un arreglo de 15 elementos numéricos de tipo float y mostrar su contenido en forma de columna
