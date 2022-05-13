#include <stdio.h>

int main() {
    float number;
    printf("Enter a number: \n");
    scanf("%f", &number);
    if(number>100){
        printf("El numero %f es mayor a 100", number);
    }
}
