#include <stdio.h>
#define C 10

//int leerNum(int array[C])
int contarNum(int array[c]){
	int cantidad=0;
	for(int i=0; i<C; i++) {
		if(array[i]%5 == 0) {
			cantidad++;
		}
	}
	return cantidad;
}

int main() {
	int n[C], resultado ;
	puts("Ingrese 10 numeros: ");
	for(int i=0; i<C; i++) {
		fflush(stdin);
		scanf("%d", n[i]);
		i++;
	}

	printf("Los multiplos son: %d", contarNum(n));
	return 0;
}
