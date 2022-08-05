#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define TR 10

//comment
int main() {
    char type[TR];
    float pesos[TR];
    for(int i=0; i<TR; i++){
        do{
            puts("Ingrese el tipo de transaccion (d=desposito, e=extraccion)");
            fflush(stdin);
            scanf("%c", &type[i]);
            toupper(type[i]);
            if(type[i]!=D && type[i]!=E) puts("Incorrecto, ingrese D o E");
        } while(type[i]!=D && type[i]!=E);
        puts("Ingrese el monto en pesos");
        fflush(stdin);
        scanf("%f", &pesos);
    }

    return 0;
}
