#include <stdio.h>
#include <stdlib.h>
/*
Realizar un programa dónde:

se lista la superficie y perímetro de un rectángulo.

se pregunte la altura y la base
altura y base deben ser mayores a CERO
una ÚNICA FUNCIÓN llamada UNA VEZ “devuelva” a quien la llama la superficie y el perímetro.
la función no escribe nada.
*/

void supAndPer(int* sup, int* per) {
    int alt, bas;
    do{
        puts("Ingrese altura: ");
        scanf("%d", &alt);
        if(alt<=0) puts("Error, valor no valido");
    }while(alt<=0);
    do{
        puts("Ingrese base: ");
        scanf("%d", &bas);
        if(alt<=0) puts("Error, valor no valido");
    }while(alt<=0);

    *sup = alt*bas;
    *per = (alt*2) + (bas*2);
    return;
}

int main() {
    int sup, per;
    supAndPer(&sup, &per);
    printf("Superficie: %d\nPerimetro: %d\n", sup, per);
}