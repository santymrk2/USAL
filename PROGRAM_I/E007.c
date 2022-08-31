#include <stdio.h>
#define T 5

void readArr(int arr[]) {
    printf("Ingrese %d numeros seguidos: \n", T);
    for(int i=0; i<T; i++) {
        scanf("%d", &arr[i]);
        fflush(stdin);
    }
}

int findMin(int arr[]) {
    int min=arr[0];
    for(int i=0; i<T; i++) {
        if(arr[i]<min)min=arr[i];
    }
    return min;
}

int main(){
    int arr[T];
    readArr(arr);
    printf("El minimo es %d", findMin(arr));
    return 0;
}