#include <stdio.h>
#include <stdlib.h>
#define N 10
/*
- Se ingrese por teclado un numero ENTERO POSITIVO y luego se genere una serie HASTA otro numero tambien ingresado por teclado (limites inferior y superior de la serie)
- El limite inferior no puede ser cero
- El limite superior debe ser mayor al limite inferior
- La cantidad maxima de numeros a guardar sera 10
- La serie cumple la condicion de: cada numero es el doble que su anterior
- Al finalizar muestre por pantalla todo el conjunto de numeros (ver pantalla de ejemplo)

- Guardar la informacion en MEMORIA DINAMICA
- Programa usando FUNCIONES
- Utilizar lenguaje C standard
- Bibliotecas permitidas: STDIO.H, STDLIB.H, STDBOOL.H
*/
int infIn(){
	int a;
	do{
		puts("Ingrese limite inferior: ");
		scanf("%d", &a);
		fflush(stdin);
		if(a<0) puts("Error, intente de nuevo");
	}while(a<0);
	return a;
}

int supIn(int b){
	int a;
	do{
		printf("Ingrese limite superior (mayor a %d): \n", b);
		scanf("%d", &a);
		fflush(stdin);
		if(a<b) puts("Error, intente de nuevo");
	}while(a<b);
	return a;
}

int defCant(int inf, int sup){
	int cant=1;
	int con=inf;
	for(int i=0; i<N; i++){
		if((con*2) < sup){
			con*=2;
			cant++;
		}
	}
	return cant;
}

void cargarNum(int* conj, int n, int inf, int sup){
	*conj = inf;
	for(int i=1; i!=n; i++){
		*(conj+i) = *(conj+(i-1))*2;
	}
	return;
}

void imprimir(int* c, int n) {
	puts("Los numeros son:\n");
	for(int i=0; i<n; i++) {
		printf("%d\n", (*(c+i)));
	}
	return;
}


void serieEntrePos() {
	int inf = infIn();
	int sup = supIn(inf);
	int cant = defCant(inf, sup);
	int* conj = (int*) malloc(cant*sizeof(int));
	if(conj != NULL){
		cargarNum(conj, cant, inf, sup);
		imprimir(conj, cant);
		free(conj);
	}
	return;
}


int main() {
	serieEntrePos();
	return 0;
}


