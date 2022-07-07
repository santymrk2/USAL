#include <stdio.h>
#include <ctype.h>
#define CAN 3

int main(){
    int N_Pass[CAN], cantINT=0;
    char T_Pass[CAN];
    for(int i=0;i<CAN;i++) {
        do{
            puts("Ingrese el numero de pasaje: ");
            scanf("%d", &N_Pass[i]);
            fflush(stdin);
            if(N_Pass[i]<=0) puts("Ingrese un numero mayor a cero");
        } while (N_Pass[i]<=0);
        do{
            puts("Ingese el tipo de viaje: (C= Cabotaje, I=Internacional)");
            scanf("%s", &T_Pass[i]);
            fflush(stdin);
            T_Pass[i]=toupper(T_Pass[i]);
        } while (T_Pass[i]!='C' && T_Pass[i]!='I');
    }
    
    //print cantidad internacionales
    puts("Cantidad de pasajes Internacionales: ");
    for(int i=0; i<CAN; i++){
        if(T_Pass[i]=='I') cantINT=cantINT + 1;
    }
    printf("%d\n", cantINT);
    //print cabotaje
    puts("Listado de pasajes en cabotaje");
    for(int i=0; i<CAN; i++) {
        if(T_Pass[i]=='C') printf("%d \n", N_Pass[i]);
    }
    puts("Listado general: \n");
    for(int i=0; i<CAN; i++){
        printf("Pasaje n %d; Tipo de pasaje: %c\n", N_Pass[i], T_Pass[i]);
    }
    
    return 0;
}
