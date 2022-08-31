//ACtividad 6 - Complete
#include <stdio.h>
#include <ctype.h>

char leerGen() {
    char l;
	do {
		puts("Ingrese el genero (f, m): ");
		scanf("%s", &l);
		l = toupper(l);
		if(l!='F' && l!='M') puts("\nError, ingrese un valor valido\n");
	} while(l!='F' && l!='M');
    return l;
}

void printGen() {
    printf("\n%c", leerGen());
}


int main() {
    printGen();
	return 0;
}