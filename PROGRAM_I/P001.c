#include <stdio.h>
#include <stdlib.h>
#define N    5

void leerPuntos(int* x, int *y, int c){
	for(int i=0; i<c; i++){
		printf("\nPunto %d\n", i+1);
		printf("Ingrese X: \n");
		scanf("%d", x+i);
		printf("Ingrese Y: \n");
		scanf("%d", y+i);
	}
	for(int i=0; i<c; i++){
		printf("\nPunto %d:\nX >> %d,\nY >> %d,\n", i+1, *(x+i), *(y+i));
	}
	return;
}

void primerCuad(int* x, int *y, int c) {
	int total = 0;
	for(int i=0; i<c; i++){
		if( *(x+i) > 0 && *(y+i) > 0 ){
			total++;
		}
	}
	printf("\nCantidad de puntos del primer cudrante: %d\n", total);

	for(int i=0; i<c; i++){
		if( *(x+i) > 0 && *(y+i) > 0 ){
			printf("\nPunto %d:\nX >> %d,\nY >> %d,\n", i+1, *(x+i), *(y+i));
		}
	}
	return;
}

void mostrarCoordenadas(int cant) {
	int* conjX = (int*) malloc(cant*sizeof(int));
	int* conjY = (int*) malloc(cant*sizeof(int));
	if((conjX != NULL) || (conjY != NULL)) {
		leerPuntos(conjX, conjY, cant);
		primerCuad(conjX, conjY, cant);
	}
    free(conjX);
    free(conjY);
}

int main() {
	mostrarCoordenadas(N);
	return 0;
}