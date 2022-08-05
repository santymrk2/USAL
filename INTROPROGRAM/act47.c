#include <stdio.h>

int main() {
    float l1, l2, l3;
    puts("Ingrese los tres lados seguidamente: ");
    do{
        scanf("%f", &l1);
        scanf("%f", &l2);
        scanf("%f", &l3);
        if(l1<=0 || l2<=0 || l3<=0) puts("Ingrese los datos nuevamente (deben ser postivos)");
    } while(l1<=0 || l2<=0 || l3<=0);
    if (l1<(l2+l3) && l2<(l1+l3) && l3<(l1+l2)) {
        puts("es posible construir un triangulo");
    } else {
        if(l1>(l2+l3)) puts("el segundo lado y el tercer causan problemas");
        if(l2>(l1+l3)) puts("el primer lado y el tercero causan problemas");
        if(l3>(l1+l2)) puts("el primer lado y el segundo causan problemas");
    }
    return 0;
}
