#include <stdio.h>
#include <ctype.h>
#define CAN 10

int main() {
    int dni[CAN];
    char visit[CAN];
    for(int i=0; i<CAN; i++){
        //there we ask for dni
        do{
            puts("Ingrese su dni:");
            scanf("%d", &dni[i]);
            if (dni[i]<0) puts("Ingrese un numero mayor a 0");
        } while(dni[i]<0);
        //there we ask for visit type
        do{
            puts("Ingrese tipo de visitante: (adulto=A, menor/jubilado=G)");
            fflush(stdin);
            scanf("%s", &visit[i]);
            visit[i]=toupper(visit[i]);
            if (visit[i]!='A' && visit[i]!='G') puts("Error de datos, ingrese A o G");
        } while(visit[i]!='A' && visit[i]!='G');
    }
    //data print
    for(int i=0; i<CAN; i++){
        printf("%d     %c\n", dni[i], visit[i]);
    }
    return 0;
}
