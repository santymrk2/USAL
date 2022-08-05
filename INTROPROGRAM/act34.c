#include <stdio.h>

int main() {
    int cic=0;
    float b, h;
    do{
        do {
            puts("Ingrese la base: ");
            scanf("%f", &b);
        } while(b<=0);
        do {
            puts("Ingrese la altura: ");
            scanf("%f", &h);
        } while(h<=0);
        printf("La superficie es %f\n", b*h/2);
        do {
        puts("Desea conocer la superficie de otro triangulo?(1=si 0=no)");
        scanf("%d", &cic);
        } while(cic!=0 && cic!=1);
        b=0, h=0;
    } while(cic==1);   
}
