#include <stdio.h>
#include <stdlib.h>
#define TAM 5

int main(){
    float array[TAM];
    for (int i=0; i<TAM; i++){
        array[i]=rand();
        printf("%.2f\n", array[i]);
    }
    return 0;
}
