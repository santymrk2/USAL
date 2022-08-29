#include <stdio.h>

//ACTIVITY 3
//Confeccionar un programa que lea N pares de datos. Cada par de datoscorresponde a la medida de la base y la altura de un triángulo.
//El programa deberá informar:
//a) De cada triángulo la medida de su base, su altura y su superficie.
//b) La cantidad de triángulos cuya superficie es mayor a 12.
//Recordar que la superficie de un triángulo es: base * altura /2“N” será ingresado por el usuario.Validar que base y altura sean mayores a 0 en una función
int calcBase() {
	int b;
	do{
		puts("Enter base: ");
		fflush(stdin);
		scanf("%d", &b);
		if(b<=0) puts("Error, please enter a number greater than 0\n");
	} while(b<=0);
	return b;
}

int calcHeight() {
	int b;
	do{
		puts("Enter height: ");
		fflush(stdin);
		scanf("%d", &b);
		if(b<=0) puts("Error, please enter a number greater than 0\n");
	} while(b<=0);
	return b;
}
int writeData(int b, int h, int a) {
	printf("	Base: %d\n	Height: %d\n	Area: %d\n", b, h, a);
	return 0;
}

int main() {
	//ask how many times
	int N;
	do{
		puts("How much triangles do you want calculate?");
		scanf("%d", &N);
	}while(N<=0);

	//Enter data
	int base[N], height[N], area[N], great=0;
	for (int i=0; i<N; i++) {
		printf("\nTriangle n%d\n", i+1);
		base[i]=calcBase();
		height[i]=calcHeight();
	}

	//calculate area
	for (int i=0;i<N; i++) {
		area[i]=(base[i]*height[i])/2;
	}

	//calculate number of greater than 12
	for (int i=0;i<N; i++) {
		if(area[i]>12){
			great=great+1;
		}
	}

	//show data	
	puts("\n-------- Results --------");
	for (int i=0;i<N; i++) {
		printf("Triangle n%d\n", i+1);
		writeData(base[i], height[i], area[i]);
	}
	printf("Areas greater than 12: %d", great);

	return 0;
}
