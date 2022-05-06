#include <stdio.h>
#define TAM 5

int main(){
    int arr[TAM];
    printf("Ingrese los numeros seguidamente: \n");
    for(int i=0; i<TAM; i++){
        scanf("%d", &arr[i]);
    }
    for(int i=0; i<TAM; i++){
        printf("%d -- %d\n", i, arr[i]);
    }
    return 0;
}
