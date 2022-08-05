#include <stdio.h>

int main() {
    int numB, numA, final=0;
    printf("Ingrese un numero A: ");
    scanf("%d", &numB);
    printf("Ingrese un numero B: ");
    scanf("%d", &numA);
    for(int i=0; i<numA; i++){
        final = final + numB;
    }
    printf("El resultado es: %d", final);
    return 0;
}
