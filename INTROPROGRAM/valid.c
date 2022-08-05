#include <stdio.h>

int main(){
    int b;
    do {
        printf("Ingrese un numero: \n");
        scanf("%d", &b);
        if(b<=0) printf("Dato no valido. Ingrese un numero mayor a cero \n");
    } while (b<=0);
}
