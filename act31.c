#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define CAN 50

int main(){
    char name[CAN];
    char sign[CAN];
    puts("Ingrese su nombre: ");
    gets(name);
    fflush(stdin);
    puts("Ingrese su signo: ");
    gets(sign);
    for(int i=0; i<strlen(sign); i++) strlen(i)=toupper(sign[i]);
    printf(sign);
    return 0;
}


