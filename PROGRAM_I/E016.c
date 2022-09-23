#include <stdio.h>
#include <ctype.h>
#define E 2

void fillData(char a[], double s[], int dim) {
    for(int i=0; i<dim; i++) {
        printf("\nEnter surname %d: ", i);
        scanf("%c", a[i]);
        fflush(stdin);
        a[i] = toupper(a[i]);
        do {
            printf("\nEnter salary %d: ", i);
            scanf("%lf", s[i]);
            fflush(stdin);
            if(s<0) puts("Data Error");
        }while(s<0);
    }
}

void order(char arr[], double car[], int dim) {
    for (int i=0; i<dim; i++) {
        for (int j=i+1; j<dim; j++){
            if (arr[j] < arr[i]) {
                char aux = arr[i];
                arr[i] = arr[j];
                arr[j] = aux;
                double aux1 = car[i];
                car[i] = car[j];
                car[j] = aux1;
            }
        }
    }
}

void show(char arr[], double car[], int dim){
    puts("\nDatos:\n");
    for(int i=0; i<dim; i++){
        printf("%c        %.2lf\n", arr[i], car[i]);
    }
}

int main(){
    char sur[E];
    double sal[E];

    //leer datos
    fillData(sur, sal, E);

    //ordenar por apellido
    order(sur, sal, E);

    //mostrar datos
    show(sur, sal, E);

    return 0;
}