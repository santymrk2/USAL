#include <stdio.h>

void swap (int *a, int *b){
    int z = *a;
    *a=*b;
    *b=z;
    return;
}

int main() {
    int m = 1, b = 2;
    printf("Antes de la funcion a=%d, b=%d \n", m, b);
    swap(&m, &b);
    printf("Antes de la funcion a=%d, b=%d \n", m, b);
    return 0;
}