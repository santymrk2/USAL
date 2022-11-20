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
	fflush(stdin);
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
	puts("\nWhat do you want to do? \n1. Listar todo el vector\n2. Listar los numeros pares\n3. Calcular el promedio\n4. Mostrar el maximo\n5. Mostrar el minimo\n6. FIN");
	do{
		scanf("%d", &a);
		if(a<1 || a>6) puts("Error, enter a number between 1 and 6");
	} while(a<1 || a>6);
	return a;
}

void listar(int l[]) {
	printf("Entered data list: \n");
	for(int i=0; i<T; i++) {
		printf("%d\n", l[i]);
	}
}

void listarPares(int l[]) {
	puts("\nEvens list:\n");
	for(int i=0; i<T; i++) {
		if(l[i]%2 == 0) printf("%d\n", l[i]);
	}
}

void promedio(int l[]) {
	int sum=0;
	for(int i=0; i<T; i++){
		sum = sum + l[i];
	}
	printf("\nEl promedio es: %d\n", sum/T);
}

void max(int l[]) {
	int max;
	for(int i=0; i<T; i++) {
		if(l[i]>max) max = l[i];
	}
	printf("\nEl valor maximo es %d\n", max);
}

void min(int l[]) {
	int min;
	for(int i=0; i<T; i++) {
		if(l[i]<min) min = l[i];
	}
	printf("\nEl valor minimo es %d\n", min);
}


void menu(int N[]) {
	int a;
	int rp = 0;
	while(rp==0){
		a = askWhat();
		switch(a) {
			case 1: listar(N); break;
			case 2: listarPares(N); break;
			case 3: promedio(N); break;
			case 4: max(N); break;
			case 5: min(N); break;
			case 6: rp=1;
		}
	}
}

//---------------------------- MAIN ----------------------------//

int main() {
	int N[T];
	datosRealizar(N);
	menu(N);
	return 0;
}
