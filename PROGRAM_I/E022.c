//Actividad 22 - Santiago Mercado - 2022

#include <stdio.h>
#include <stdbool.h>
#define T 100
#define MAXSTR 50


typedef struct{
	char nom[MAXSTR];
	char eq[MAXSTR];
	int part;
	int goles;	
}tipoJUG;

bool deseaContinuar() {
	int j;
	do{
		puts("Desea continuar? (Si=1, No=0)");
		scanf("%d", &j);
		fflush(stdin);

		if(j!=1 && j!=0) puts("Error, valor incorrecto");
	} while(j!=1 && j!=0);
	return j;
}

int cargar(tipoJUG l[]) {
	bool quiero;
	int i=0;
	do {
		//leer el nombre
		puts("Ingrese el nombre: ");
		scanf("%s", l[i].nom);
		fflush(stdin);

		//leer el equipo
		puts("Ingrese el equipo: ");
		scanf("%s", l[i].eq);
		fflush(stdin);

		//leer cant partidos
		puts("Ingrese cantidad de partidos: ");
		scanf("%d", &l[i].part);
		fflush(stdin);


		//leer goles solo si jugo partidos
		if(l[i].part!=0) {
			puts("Ingrese cantidad de goles: ");
			scanf("%d", &l[i].goles);
			fflush(stdin);
		} else {
			l[i].goles == 0;
		}

		quiero=deseaContinuar();
		i++;
	} while(quiero == true);
    return i;
}

void mostrar(tipoJUG j[], int jug) {
	int prom = 0;
	for(int i=0;i<jug; i++){
		
		printf("Nombre: %s,\nEquipo: %s,\nPromedio de goles por partido: %f", j[i].nom, j[i].eq );
	}
    return;
}

int main(){
	//declarar variables 
	tipoJUG fifa[T];
	int jug;
	
	//cargar los datos
	jug = cargar(fifa);
	
	//mostrar
	mostrar(fifa, jug);
	return 0;
}
