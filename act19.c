#include <stdio.h>

int main() {
    int numero;
    printf("Ingrese un numero: ");
    scanf("%d", &numero);
    while(numero<0 || numero>1) {
        numero = numero - 2;
    }
    if (numero==1) {
        printf("El numero es IMPAR");
    } else if (numero==0) {
        printf("El numero es PAR");
    }
    return 0;
}

