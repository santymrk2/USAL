#include <stdio.h>
#include <ctype.h>
#define can 100

int main(){
    double mont[can], total=0;
    char mp[can], cont;
    for(int i=0;i<can;i++){
        do{
            puts("Ingrese el monto: ");
            fflush(stdin);
            scanf("%lf", &mont[i]);
        } while(mont[i]<=0);
        do{
            puts("Ingrese el medio de pago (E=efectivo, D=debito, C=credito)");
            fflush(stdin);
            scanf("%s", &mp[i]);
            mp[i]=toupper(mp[i]);
            if(mp[i]!='E' && mp[i]!='D' && mp[i]!='C') puts("Error, ingrese E, D o C");
        } while(mp[i]!='E' && mp[i]!='D' && mp[i]!='C');
        puts("Desea continuar (s=si, n=no)");
        fflush(stdin);
        scanf("%c", &cont);
        cont=toupper(cont);
        if(cont=='S' || cont=='N') i=can;
    }
    for(int i=0; i<can; i++){
        printf("%lf %c\n", mont[i], mp[i]);
    }
}
