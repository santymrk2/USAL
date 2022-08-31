#include <stdio.h>
#define ROWS 8
#define COLS 4

void llenarMatriz(int m[][COLS], int r) {
    printf("Ingrese nros en una matriz de %d filas x %d columnas", r,COLS);
    for (int i=0; i < r; i++) {
        printf("\nFila %d: \n", i+1);
        for (int j=0; j< COLS; j++) scanf("%d", &m[i][j]);
        }
    return;
}