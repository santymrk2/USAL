#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define T 20

int main(){
    int arr[T];
    srand(time(NULL));
    for (int i=0; i<T; i++) arr[i] = rand();
    int aux = arr[0];
    for (int i=0; i<T; i++) {
        if(arr[i]>aux) {
            aux = arr[i];
        }
    }
    printf("el mayor es: %d\n", aux);
    for (int i=0; i<T; i++){
        printf("%d\n", arr[i]);
    }
    return 0;
}
