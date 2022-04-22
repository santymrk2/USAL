//Santiago Mercado (45189698) - Abril 2022
#include <stdio.h>

int main() {
    int N, suma=0, promedio=0, number=0;
    printf("Cuantos numeros desea ingresar? \n");
    scanf("%d", &N);
    if(N<=0) {
        printf("error");
    } else {

        printf("Comienze a ingresar los numeros seguidamente: \n");
        for(int i=0;i < N; i++) {
           scanf("%d", &number);
            if(number<=0){
                printf("Ingrese un numero mayor a 0 \n");
                scanf("%d", &number);
                suma = suma + number;
            } else {
                suma = suma + number;
            }
        }
    }
    promedio = suma / N;
    printf("el promedio es igual a %d", promedio);
    return 0;
}

