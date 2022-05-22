#include <stdio.h>
#include <ctype.h>

int main(){
    int fin, n1, n2;
    char op;

    puts("Ingrese dos nros: ");
    scanf("%d", &n1);
    scanf("%d", &n2);

    do {
			puts("Ingese la operacion: \n suma = S \n resta = R \n multiplicacion = M \n division = D\n");
			fflush(stdin);
      scanf("%c", &op);
      op = toupper(op);
    }
    while ((op != "S") || (op != "R") || (op != "M") || (op != "N"));

		switch (op) {

			case 'S': printf("%d", n1+n2); break;
			case 'S': printf("%d", n1+n2); break;
			case 'S': printf("%d", n1+n2); break;
			case 'S': if(n2=0) puts("No se puede dividir por cero");
								else printf("%d", n1/n2); break;
		}

    return 0;
}
