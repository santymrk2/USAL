/*  En un club se registran los datos de sus socios de la siguiente manera:
- Número de socio (INT, mayor a cero)
- Edad (INT, mayor a 0)
- Tipo de deporte que practica (tennis T, futbol F, voley V)
Se realizará una prueba con sólo 10 socios.
Realizar un algoritmo que luego de haber cargado los datos, emita un informe por pantalla con:
todos los datos cargados en forma de columnas */
#include <stdio.h>
#include <stdlib.h>
#define N 3

typedef struct{
	int num;
	int age;
	char sport;
} tSocio;

int numero() {
	int a;
	do{
		puts("Ingrese numero de socio: ");
		scanf("%d", &a);
		if(a<0)puts("\nError, intente nuevamente\n");
	}while(a<0);
	return a;
}

int edad() {
	int a;
	do{
		puts("Ingrese la edad del socio: ");
		scanf("%d", &a);
		fflush(stdin);
		if(a<0)puts("\nError, intente nuevamente\n");
	}while(a<0);
	return a;
}

char deporte() {
	char a;
	do{
		puts("Ingrese el deporte que practica (tennis=T, futbol=F, voley=V): ");
		scanf("%c", a);
		fflush(stdin);
		if(a!='T' && a!='F' && a!='V')puts("\nError, intente nuevamente\n");
	}while(a!='T' && a!='F' && a!='V');
	return a;
}

void cargar(tSocio* conj, int cant) {
	for(int i=0; i<cant; i++){
		(conj+i)->num = numero();
		(conj+i)->age = edad();
		(conj+i)->sport = deporte();
	}
}

void imprimir(tSocio* conj, int cant) {
    puts("socio  edad     deporte");
	for(int i=0; i<cant; i++){
		printf("%d     %d       %c", (conj+i)->num, (conj+i)->age, (conj+i)->sport);
	}
}

void crearSocios(int n) {
	tSocio* conj = (tSocio*) malloc(n*sizeof(tSocio));
	if(conj != NULL) {
		cargar(conj, n);
		imprimir(conj, n);
		free(conj);
	}

	return;
}

int main() {
	crearSocios(N);
	return 0;
}