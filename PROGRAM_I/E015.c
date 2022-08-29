#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define T 10

void fillArray(int arr[]){
    srand(time(NULL)); 
    for(int i=0; i<T;i++) {
        arr[i] = rand()%50;
    }
}

void showArray(int arr[]) {
    puts("\nArray:");
    for(int i=0; i<T; i++) {
        printf("%d\n", arr[i]);
    }
}

void order(int arr[], int dim) {
    for (int i=0; i<dim; i++) {
        for (int j=i+1; j<dim; j++){
            if (arr[j] < arr[i]) { 
                int aux = arr[i];
                arr[i]=arr[j];
                arr[j]= aux;
            }
        }
    }
}

int main() {
    int arr[T];
    fillArray(arr);
    showArray(arr);
    order(arr, T);
    showArray(arr);
    return 0;
}