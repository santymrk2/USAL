/*2do parcial - Introducion a la programacion
Santiago Mercado Carbone
DNI: 45189698*/

#include <stdio.h>
#define RP 10

int main() {
    int n, sum=2;
    puts("Ingrese un numero: ");
    scanf("%d", &n);
    for(int i=0; i<RP; i++){
        printf("- %d\n", n);
        n = n + sum;
        sum = sum * 2;
    }
    return 0;
}
