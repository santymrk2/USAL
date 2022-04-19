#include <stdio.h>
#define NUM 60

int main() {
    float second, minute, hour;
    printf("Ingrese los segundos: ");
    scanf("%f", &second);
    minute = second / NUM;
    hour = minute / NUM;
    printf("Segundos: %f;\nMinutos: %f;\nHoras: %f;", second, minute, hour);
    return 0;
}
