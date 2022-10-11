#include <stdio.h>

void secondConversor(int *s, int *h, int *m) {
    *m=*s/60;
    *s=*s%60;
    *h=*m/60;
    *m=*m%60;
    return;
}

int main() {
    int sec = 4623, min=0, hour=0;
    secondConversor(&sec, &hour, &min);
    printf("\nHoras: %d, \nMinutos: %d, \nSegundos %d,\n", hour, min, sec);
    return 0;
}