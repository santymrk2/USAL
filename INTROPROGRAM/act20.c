#include <stdio.h>
#define AUX 60

int main() {
    int s;
    do{
        printf("El valor debe ser mayor a 0");
        scanf("%d", &s);
    } while (s<0);

    return 0;
}
