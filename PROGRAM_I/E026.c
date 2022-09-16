#include <stdio.h>
#include <ctype.h>
#define C 100

/*
- Confeccionar un programa que calcule los sueldos de N empleados, solicitando el ingreso por teclado
de nombre completo, el pago porhora y la cantidad de horas trabajadas de cada empleado.
- Ingresar por teclado la cantidad N de empleados.
- Resolver usando estructuras, vectores y funciones.
*/

typedef struct {
    char nombreC[C];
    float pago;
    float horas;
} empleado;

int cantEmp(){
    int e;
    do{
        puts("Ingrese cantidad de empleados: ");
        scanf("%d", &e);
        if(e<=0) puts("ERROR, intente de nuevo");
    } while(e<=0);
}

void mayus(char str[], int e){
    for(int i=0; i < C; i++){
        str[i] = toupper(str[i]);
    }
    return;
}

void inData(empleado b[], int e){
    for(int i=0; i < e; i++){
        //leo nombre
        puts("Ingrese nombre completo: ");
        fflush(stdin);
        gets(b[i].nombreC);
        mayus(b[i].nombreC, e);
        // leo pago por hora
        do{
            puts("Ingrese el pago por hora: ");
            scanf("%f", &b[i].pago);
            fflush(stdin);
            if(b[i].pago<0) puts("error");
        } while(b[i].pago<0);
        //leo horas trabajadas
        do{
            puts("Ingrese cantidad de horas trabajadas: ");
            scanf("%f", &b[i].horas);
            fflush(stdin);
        if(b[i].horas<0) puts("error");
        } while(b[i].horas<0);
    }
}

void printData(empleado b[], int e){
    for(int i=0; i<e; i++){
        puts("--\n");
        printf("Empleado n%i:\nNombre: %-10s \nSueldo: %8.2f\n", i+1, b[i].nombreC, b[i].horas*b[i].pago);
    }
}

int main(){
    int cEmp = cantEmp();
    empleado base[cEmp];
    inData(base, cEmp);
    printData(base, cEmp);
}