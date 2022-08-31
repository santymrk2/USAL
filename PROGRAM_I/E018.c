#include <stdio.h>
#define ROWS 8
#define COLS 4

void iniMatriz(int m[ROWS][COLS]) {
    for (int i=0; i < ROWS; i++) {
        for (int j=0; j< COLS; j++) {
            m[i][j] = 0;
        }
    }
    return;
}