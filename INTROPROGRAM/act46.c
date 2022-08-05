#include <stdio.h>
#define TM 3

int main() {
    int arr[TM];
    puts("ingrese tres numeros");
    for(int i=0; i<TM; i++){
        do{
            scanf("%d", &arr[i]);
            if(arr[i]==0) puts("ingrese un numero distinto a cero\n");
        } while (arr[i]==0);
    }
    if(arr[0]==arr[1]==arr[2]) puts("TRES iguales");
    else if(arr[0]==arr[1] || arr[0]==arr[2] || arr[1]==arr[2]) puts("DOS iguales");
    else puts("Ninguno igual");
}
