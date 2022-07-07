#include <stdio.h>
#include <ctype.h>
#define CAN 10

int main() {
    int array[CAN];
    printf("Ingrese %d numeros seguidamente: \n", CAN);
    for (int i = 0; i < CAN; i++) {
        scanf("%d", &array[i]);
        fflush(stdin);
    }
    puts("Lista de numeros:");
    for(int i = 0; i < CAN; i++) {
        printf("%d\n", array[i]);
    }
    puts("Lista de numeros pares y negativos:\n");
    for(int i = 0; i < CAN; i++) {
        int par = array[i]%2;
        if(array[i]<0 && par==0){
            printf("%d\n", array[i]);
        }
    }
    return 0;
}
