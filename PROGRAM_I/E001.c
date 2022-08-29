#include <stdio.h>

void readNum(int v) {
	scanf("%d", &v);
	fflush(stdin);
}

void printCubeNum(int v) {
	printf("El cubo de %d es: %d", v, v*v*v);
}

int main() {
	int Num;
	//read num
	readNum(Num);
	//print num
	printCubeNum(Num);
	return 0;
}
