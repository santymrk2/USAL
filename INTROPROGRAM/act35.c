#include <stdio.h>
#include <ctype.h>

int main(){
    float n1, n2;
    char op;

    puts("Enter 2 numbers: ");
    scanf("%f", &n1);
    scanf("%f", &n2);

    do {
			puts("Enter an operation: \n sum = S \n substraction = R \n multiplication = M \n division = D\n");
			fflush(stdin);
      scanf("%s", &op);
      op = toupper(op);
    }
    while ((op != 'S') && (op != 'R') && (op != 'M') && (op != 'D'));

		switch (op) {
      case 'S': printf("%f", n1+n2); break;
	    case 'R': printf("%f", n1-n2); break;
      case 'M': printf("%f", n1*n2); break;
	    case 'D': if(n2==0) puts("No se puede dividir por cero");
								else printf("%f", n1/n2); break;
		}

    return 0;
}
