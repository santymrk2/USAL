/*ejercicio 13*/
#include <stdio.h>
#define MAX 3

int main(){
    int num, suma = 0;
    for(int veces = 0; veces < MAX; veces++){
        printf("Ingrese un nro.: ");
        scanf("%d", &num);
        suma = suma + num;
    }
    printf("La suma total es: %d", suma);
    return 0;
}
