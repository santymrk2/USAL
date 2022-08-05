#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define AL 30

int main(){
    char sec[AL];
    int cabInt[AL], aula[AL], cont=0, i=0, noCon=0, pi=0;
    do{
        do{
            puts("Tiene conexion cableada?");
            scanf("%d", &cabInt[i]);
            if(cabInt[i]!=1 && cabInt[i]!=0) puts("Error, ingrese '1' o '0'");
        } while(cabInt[i]!=1 && cabInt[i]!=0);
        do{
            puts("Sector del colegio (J=jardin, P=primaria, S=secundaria)");
            scanf("%s", &sec[i]);
            sec[i]=toupper(sec[i]);
            if(sec[i]!='P' && sec[i]!='J' && sec[i]!='S') puts("Error, ingrese 'P' o 'J' o 'S'");
        } while(sec[i]!='P' && sec[i]!='J' && sec[i]!='S');
        aula[i]=i+1;
        puts("Desea continuar? (1=si 0=no)");
        scanf("%d", &cont);
        if(cont==1) i++;
    } while(cont==1);
    for(int r=0; r<i+1; r++){
        printf("%d     %d     %c\n", aula[r], cabInt[r], sec[r]);
    }
    for(int r=0; r<i; r++){
        if(cabInt[r]==0) noCon=noCon+1;
    }
    printf("Cantidad de aulas sin conexion: %d\n", noCon);
    puts("Aulas de secundaria:");
    for(int r=0; r<i; r++){
        if(sec[r]=='S'){
            printf("%d\n", aula[r]);
            pi=pi+700;
        }
    }
    printf("Total gastado en pizarrones inteligentes: %d", pi);
    return 0;
}
