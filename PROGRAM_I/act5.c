#include <stdio.h>
#define T 10
//datosRealizar un programa donde:
//● se defina un vector de 10 NÚMEROS ENTEROS
//● se llene el vector con números MÚLTIPLOS de 3 ingresados por teclado (el usuario puede ingresar cualquier número, es necesario validar y sólo guardar los múltiplos de 3)
//pista: función para validar la carga de UN elemento, carga limpia (queno haga nada de lo pedido después)

int saveElement() {
	int a;
	puts("Enter number: ");
	scanf("%d", &a);
	return a;
}

void datosRealizar(int a[]) {
	for(int i=0; i<T; i++) {
		do{
			a[i] = saveElement();
			if(a[i]%3!=0) puts("Error, enter a multiply of 3"); 
		} while(a[i]%3!=0);
	}
}

int askWhat() {
	int a;
	puts("What do you want to do? \n1. Listar todo el vector\n2. Listar los numeros pares\n3. Calcular el promedio\n4. Mostrar el minimo\n5. Mostrar el maximo\n6. FIN");
	do{
		scanf("%d", &a);
		if(a<1 || a>6) puts("Error, enter a number between 1 and 6");
	} while(a<1 || a>6);
	return a;
}

listar() {
	for(int i=0;)
}
listarPares()
promedio()
max()
min()
FIN()

void menu() {
	int a = askWhat();
	switch(a) {
		case 1: listar(); break;
		case 2: listarPares(); break;
		case 3: promedio(); break;
		case 4: max(); break;
		case 5: min(); break;
		case 6: FIN(); break;
	}
}


int main() {
	int N[T];
	datosRealizar(N);
	menu();
	return 0;
}
