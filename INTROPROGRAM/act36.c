#include <stdio.h>
#include <ctype.h>

int main(){
    int fin, n1, n2, cont;
    char op=0;
    do{
    puts("Enter two numbers: ");
    scanf("%d", &n1);
    scanf("%d", &n2);
    
        while ((op != 'S') && (op != 'R') && (op != 'M') && (op != 'D')) {
            puts("Enter an operation: \n sum = S \n rest = R \n multiplication = M \n division = D\n");
            fflush(stdin);
            scanf("%s", &op);
            op = toupper(op);
        }  
		
        switch (op) {
            case 'S': printf("Result: %d", n1+n2); break;
            case 'R': printf("Result: %d", n1-n2); break;
            case 'M': printf("Result: %d", n1*n2); break;
            case 'D': if(n2 == 0) {
                          puts("No se puede dividir por cero");
                      }else printf("Result: %d", n1/n2); break;
        }
        op = 0;
        do {
            puts("\nDo you want to continue? 1=yes 0=no");
            scanf("%d", &cont);
        } while(cont!=0 && cont!=1);
    } while(cont == 1);
    return 0;
}
