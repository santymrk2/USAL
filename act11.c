#include <stdio.h>

int main() {
    float b, h;
    do {
        puts("Ingrese la base: ");
        scanf("%f", &b);
    } while(b<=0);
    do {
        puts("Ingrese la altura: ");
        scanf("%f", &h);
    } while(h<=0);
    printf("La superficie es %f", b*h/2);
}

