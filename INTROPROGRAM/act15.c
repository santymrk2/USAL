//actividad 15; Santiago Mercado;
#include <stdio.h>

int main(){
    int num, i=0, final=0;
    printf("Ingrese un numero: ");
    scanf("%d", &num);
    do {
        final=final+i;
        i++;
    } while (i<=num);
    printf("La suma es: %d", final);
    return 0;
}
