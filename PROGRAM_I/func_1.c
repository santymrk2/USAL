#include <stdio.h>

int leerSupCond(int o) {
	//esta funcion lee un numero con la condicion que sea mayor al numero ingresado
	int sup;
	do{
		puts("Ingrese limite superior: ");
		scanf("%d", &sup);
		if(sup<o) puts("Ingrese un numero mayor a al inferior");
	} while(sup<o);
	
	return sup;
}

int leerInf() {
	int inf;
	puts("Ingrese limite inferior: ");
	scanf("%d", &inf);
	return inf;
}
int valorEntre(int inf, int sup) {
	int v;
	do{
		puts("\nIngrese un valor entre los limites");
		printf("Inferior: %d\nSuperior: %d\n", inf, sup);
		scanf("%d", &v);
		if(v<inf || v>sup) puts("\nError, valor incorrecto");
	} while(v<inf || v>sup);
	return v;
}

int nroEntreLimit() {
	int inf, sup, v;
	//leer los limites	
	inf = leerInf();
	sup = leerSupCond(inf);
	//ingrese un valor entre los limites
	v = valorEntre(inf, sup);
	//retorne un valor entero valido
	return v;
}

//-------------------- main ----------------------//

int main() {
	nroEntreLimit();
	return 0;
}
