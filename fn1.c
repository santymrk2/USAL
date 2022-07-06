#include <stdio.h>
#include <ctype.h>
#define CAN 10

int main(){
    int N_Pass[CAN], cantINT;
    char T_Pass[CAN];
    for(int i=0;i<10;i++) {
        do{
            puts("Ingrese el numero de pasaje: ");
            scanf("%d", &N_Pass[i]);
            if(N_Pass[i]<=0) puts("Ingrese un numero mayor a cero");
        } while (N_Pass[i]<=0);

        do{
            puts("Ingese el tipo de viaje: (C= Cabotaje, I=Internacional)");
            fflush(stdin);
            scanf("%c", &T_Pass[i]);
            T_Pass[i]=toupper(T_Pass[i]);
        } while (T_Pass[i]!='C' && T_Pass[i]!='I');
    }
    puts("Cantidad de pasajes Internacionales: ");
    for(int i=0; i<CAN; i++){
        if(T_Pass[i]=='I') cantINT=cantINT++;
    }
    printf("%d\n", cantINT);
    puts("Listado de pasajes en cabotaje");
    for(int i=0; i<CAN; i++) {
        if(T_Pass[i]=='C') printf("%c\n", T_Pass);
    }
    for(int i=0; i<CAN; i++){
        printf("Pasaje n%d; Tipo de pasaje: %c\n", N_Pass, T_Pass);
    }
    
    return 0;
}
