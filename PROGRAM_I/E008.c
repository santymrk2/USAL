#include <stdio.h>
#include <stdbool.h>
#define CANT 3


void cargarVec(int dni[], int age[], bool pami[]) {
    for(int i=0;i<CANT;i++){
        //leer dni
        printf("Ingrese el dni de la persona: ");
        scanf("%d", &dni[i]);
        fflush(stdin);

        //leer edad
        do {
        printf("Ingrese la edad: ");
        scanf("%d", &age[i]);
        fflush(stdin);
        if (age[i]<0) puts("Error, dato de edad incorrecto");
        } while(age[i]<0); 

        //leer si es pami
        int p;
        do {
        printf("Esta afiliado a PAMI? (1=si, 0=no)");
        scanf("%d", &p);
        if (p<0 && p>1) puts("Error, dato de pami incorrecto");
        } while(p<0 && p>1);
        pami[i] = p;
    }
}

int askNumber(){
    int sec=0;
    do{
        puts("Elija una de las siguientes opciones:\n1. Cantidad de socios afiliados a Pami\n2. Promedio de edad de los No afiliados a Pami\n3. Mostrar todos los datos\n4.Salir\n");
        scanf("%d", &sec);
        if(sec<1 || sec>4) puts("\n-----------------------\nError, ingrese 1, 2, 3 o 4\n-----------------------\n");
    } while(sec<1 || sec>4);
    return sec;
}

void sociosPami(bool pami[]){
    int q=0;
    for(int i=0;i<CANT; i++) if(pami[i]==true) q++;
    printf("\nLa cantidad de socios afilados a PAMI son: %d\n", q);
}

void promedioEdadNoPami(int age[], bool pami[]) {
    int g=0;
    float p=0, f=0;
    for(int i=0;i<CANT;i++) {
        if(pami[i]==false){
            p=p+age[i];
            g++;
        }
    }
    f = p/g;
    printf("\nEl promedio de edad de los no afiliados a PAMI es: %.1f\n", f);
}

void isPami(bool a){
    if(a==false) {
        printf("PAMI: No\n");
    } else {
        printf("PAMI: Si\n");
    }
}

void datosDescendente(int dni[], int age[], bool pami[]) {
    for(int i=0;i<CANT;i++){
        if(age[i]>80) {
            printf("DNI: %d,\nEdad: %d,\n", dni[i], age[i]);
            isPami(pami[i]);
        }
    }
    for(int i=0;i<CANT;i++){
        if(age[i]<=80) {
            printf("DNI: %d,\nEdad: %d,\n", dni[i], age[i]);
            isPami(pami[i]);
        }
    }
}

void menu(int dni[], int age[], bool pami[]){
    int a, rp=0;
    while (rp==0){
        a = askNumber();
        switch(a){
            case 1: sociosPami(pami); break;
            case 2: promedioEdadNoPami(age, pami); break;
            case 3: datosDescendente(dni, age, pami); break;
            case 4: rp=1;
        }
    }
}

int main() {
    int dni[CANT], age[CANT];
    bool pami[CANT];
    cargarVec(dni, age, pami);
    menu(dni, age, pami);
    return 0;
}