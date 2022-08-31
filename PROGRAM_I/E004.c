#include <stdio.h>
#include <ctype.h>
#define T 100

/*Realizar un programa para anotarse al final de julio donde:
● se lea una CADENA DE CARACTERES, ingresando por teclado la materia que se quiere anotar (INTRO, PROGRA)
● determine si lo ingresado es VÀLIDO o NO, lo avise por pantalla y vuelva aingresar hasta que sea válido.
Permitir el ingreso de mayúsculas y minúsculas.Sólo una inscripción.
pista: Función para validar la materia */


void leerMateria(char m[]) {
	do {
		puts("Ingrese la materia (intro, progra): ");
		scanf("%s", m);
		fflush(stdin);
		for (int i=0;i<T;i++) m[i]=toupper(m[i]);
		if(m!="INTRO" && m!="PROGRA") puts("\nError, no se reconoce la materia\n");
	} while(m!="INTRO" && m!="PROGRA");
}

int main() {
	char mat[T];
	leerMateria(mat);
	return 0;
}



/*void leerMateria(char m[]) {
	puts("Ingrese la materia (intro, progra): ");
	scanf("%s", m);
	fflush(stdin);
	for (int i=0;i<T;i++) m[i]=toupper(m[i]);
}

void validarMat(char m[]){
	while(m!="INTRO" && m!="PROGRA") {
		if(m!="INTRO" && m!="PROGRA") puts("\nError, no se reconoce la materia\n");
		leerMateria(m);
	}
}

int main() {
	char mat[T];
	//leer materia
	leerMateria(mat);
	//printf("%s\n", mat);
	//validar materia
	validarMat(mat);
	return 0;
}
*/