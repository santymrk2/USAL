//Ejercicio 2

#include <stdio.h>
#include <stdlib.h>
#define N 10

int leerMin(){
	int a;
	do{
		puts("Ingrese limite inferior: ");
		scanf("%d", &a);
		fflush(stdin);
		if(a<=0) puts("Error, intente de nuevo");
	}while(a<=0);
	return a;
}

int leerMax(int b){
	int a;
	do{
		printf("Ingrese limite superior (mayor a %d): ", b);
		scanf("%d", &a);
		fflush(stdin);
		if(a<=b) puts("Error, intente de nuevo");
	} while(a<=b);
	return a;
}

int defCant(int inf, int sup) {
	int n=2, cont=inf;
	for(int i=0; i < (N-2); i++){
		cont*=2;
		if(cont<sup){
			n++;
		}
	}
	return n;
}

void cargar(int* conj, int n, int inf, int sup){
	*conj = inf;
	for(int i=1; i < (n-1); i++){
		*(conj+i) = (*(conj+(i-1)))*2;
	}
	*(conj+(n-1)) = sup;
	return;
}

void imprimir(int* conj, int n) {
	for(int i=0; i!=n; i++){
		printf("%d\n", *(conj+i));
	}
	return;
}

void numerosEntreDos(){
	int inf = leerMin();
	int sup = leerMax(inf);
	int cant = defCant(inf, sup);
	int* conj = (int*) malloc(cant*sizeof(int));
	if(conj != NULL) {
		cargar(conj, cant, inf, sup);
		imprimir(conj, cant);
		free(conj);
	}
	return;
}

int main() {
	numerosEntreDos();
	return 0;
}