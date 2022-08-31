#include <stdio.h>
#define ROWS 8
#define COLS 4

void mostrarMatriz(int m[][COLS], int r) {
    for (int i=0; i < r; i++) {
        for (int j=0; j< COLS; j++) {
            printf("%5d\t", m[i][j]);
        }
        printf("\n");
    }
    return;
}