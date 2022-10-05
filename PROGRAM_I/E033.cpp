#include <stdio.h>
#include <string.h>
#define SQ 100
#define MQ 7


typedef struct {
    char name[SQ];
    char desc[SQ];
    double anualFee;
}memberT;
/*
Para la misma entidad deportiva y utilizando la misma tabla de costos anuales de membresía, desarrollar una función que:
● reciba la tabla CARGADA en forma desordenada y una categoría de socio (member type)
● devuelva los datos asociados a esa categoría
 */

void dataByType(memberT m[], char l[]){
    for(int i=0; i<MQ; i++){
        if(strlen(m[i].name, l)==0){
            printf("%s -- %s -- %lf", m[i].name, m[i].desc, m[i].anualFee);
            return;
        }
    }