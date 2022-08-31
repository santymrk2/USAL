#include <stdio.h>

void readNum(int v) {
	puts("Ingrese un numero: ");
	scanf("%d", &v);
	fflush(stdin);
}

int main() {
	int num;
	//read num
	readNum(num);
	//print num
	printf("El cubo de %d es: %d", num, num*num*num);
	return 0;
}
