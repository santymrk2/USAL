#include <stdio.h>
#define HIS 5
int main() {
    int sat, sun, wend; 
    do {
        puts("Cantidad de milimetros caidos el sabado: ");
        scanf("%d", &sat);
    } while (sat<0);
    do {
        puts("Cantidad de milimetros caidos el domingo: ");
        scanf("%d", &sun);
    } while (sun<0);
    wend=sat+sun;
    if(wend>HIS) puts("Este fin de semana ingresado es superior a la marca historica");
    else if (wend<HIS) puts("Este fin de semana ingresado es inferior a la marca historica");
    else puts("Este fin de semana ingresado es igual a la marca historica");
    return 0;
}
