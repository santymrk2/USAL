#include <stdio.h>

int main() {
    int pares=0, impares=0, num;
    printf("Ingrese 20 numeros seguidos: \n");
    for(int i=0; i < 20; i++) {
        scanf("%d", &num);
        if(num%2 == 1) {
            impares++;
        } else {
            pares++;
        }
    }
    printf("Pares: %d;\nImpares: %d;", pares, impares);
    return 0;
}
