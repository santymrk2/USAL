#include <stdio.h>
#define Q 5

int main(){
    float array[Q], end=0;
    printf("Ingrese los numeros seguidamente: \n");
    for(int i=0;i<Q; i++){
        scanf("%f", &array[i]);
    }
    for(int i=0; i<Q; i++){
        end = end + array[i];
    }
    printf("El promedio es: %.2f", end/Q);
    return 0;
}
