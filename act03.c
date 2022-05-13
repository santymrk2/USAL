#include <stdio.h>

int main() {
    int num1, num2, num3, num4, num5;
    printf("Ingrese el primer numero ");
    scanf("%d", &num1);
    printf("Ingrese el segundo numero ");
    scanf("%d", &num2);
    printf("Ingrese el tercer numero ");
    scanf("%d", &num3);
    printf("Ingrese el cuarto numero ");
    scanf("%d", &num4);
    printf("Ingrese el quinto numero ");
    scanf("%d", &num5);
    int promedio = (num1 + num2 + num3 + num4 + num5)/5;
    printf("El promedio es %d", promedio);
    return 0;
}