/*Para una entidad deportiva que busca informatizarse, se requiere desarrollar un programa que:
● guarde la información de los tipos de miembros (tomar la tabla adjunta como guía): ahora hay un máximo de 7 tipos de miembros
(pero este número está en revisión por lo tanto establecerlo como constante
y preguntar al usuario si quiere continuar cargando después decada tipo cargado)
● cada tipo de miembro consta de nombre, descripción y costo anual de la membresía
● validar el costo
● luego de cargar toda la información mostrarla en forma de tabla.
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>
#define SQ 100
#define MQ 7


typedef struct {
    char name[SQ];
    char desc[SQ];
    double anualFee;
}memberT;

bool continua(){
    bool n;
    char l[2];
    do{
        puts("Si desea continuar elija 'si', sino escriba 'no': ");
        fflush(stdin);
        gets(l);
        for(int i=0; i<(strlen(l)); i++) {
            l[i] = toupper(l[i]);
        }
        if ((strcmp(l, "SI") != 0) && (strcmp(l, "NO") != 0)) puts("dato invalido");
    }while((strcmp(l, "SI") != 0) && (strcmp(l, "NO") != 0));
    if((strcmp(l, "SI") == 0)) n = true;
    else n = false;
    return n;
}

void readFee(memberT m){
    do{
        puts("Ingrese costo anual: ");
        scanf("%lf", &m.anualFee);
        if(m.anualFee<=0) puts("Dato no admitido");
    }while(m.anualFee<=0);
}

memberT devolverUno(){
    memberT temp;
    puts("Ingrese nombre del tipo de miembro: ");
    gets(temp.name);
    puts("Ingrese descripcion del tipo de miembro: ");
    gets(temp.desc);
    readFee(temp);
    return temp;
}

int dataIn(memberT m[]) {
    bool want=true;
    int i;
    for(i=0;(i<MQ) && (want==true); i++) {
        m[i] = devolverUno();
        want = continua();
    }
    return i;
}

void dataOut(memberT m[]){
    return;
}

//---------------- MAIN --------------------//

int main() {
    memberT member[MQ];
    int cant = dataIn(member);
    dataOut(member);
    return 0;
}