#include <stdio.h>

int main() {
    double number;
    double result;
    printf("Ingrese un numero: \n");
    scanf("%lf", &number);
    result = number * number;
    printf("El cuadrado de %lf es %lf", number, result);
    return 0;
}
