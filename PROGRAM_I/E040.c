#include <stdlib.h>
#include <stdio.h>

int leerCantInv(){
    int a;
    do{
        puts("Ingrese la cantidad de invitados: ");
        scanf("%d", &a);
        if(a<0)puts("Error, intente de nuevo");
    } while (a<0);
    return a;
}

void listar(int* a, int cant){
    for(int i=0; i<cant; i++){
        printf("Usuario %d > %d \n", i+1, *(a+i));
    }
    return;
}

float cargar(int* a, int cant){
    float all = 0;
    for(int i=0; i < cant; i++){
        do{
            printf("Ingrese la edad del invitado %d: ", i+1);
            scanf("%d", a+i);
            all = all + *(a+i);
            if((*(a+i)) <= 0) puts("Error, intente de nuevo");
        } while((*(a+i)) <= 0);
    }
    return all/cant;
}

void averiguarPromedio(int cant) {
    int* conjE = (int*) malloc(cant * sizeof(int));
    if(conjE != NULL) {
        //ya estoy seguro que tengo espacio
		//opción 1 carga edades, calcula promedio e imprime promedio
		//opción 2 float prom = cargar(conjE, cant) (carga y retorna el promedio); printf de prom
		//opción 3 printf("El promedio es %.2f", cargar(conjE, cant));
        printf("El promedio es %.2f\n", cargar(conjE, cant));

        listar(conjE, cant);
        free(conjE);
    } else puts("Error. Memoria no disponible");
    return;
}

int main(){
    int N = leerCantInv();
    //int vEdades[n] -- ahora no, ahora memoria dinamica
    averiguarPromedio(N);
    return 0;
}