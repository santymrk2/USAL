/*
Para una agencia de deportes extremos que busca informatizarse, se requiere desarrollar un programa que:
● GUARDE la información de las nuevas actividades a ofrecer (tomar la tabla adjunta como guía)
● ahora hay 6 nuevas actividades (pero este número cambia frecuentemente por lo tanto establecerlo como CONSTANTE
y preguntar al usuario SI SE QUIERE CONTINUAR cargando después de cada nueva actividad cargada)
● cada nueva actividad consta de NOMBRE, el LUGAR donde se practica, un RATING según la dificultad que va de 1 a 5
● luego de cargar toda la información MOSTRARLA en forma de TABLA
*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>
#define SL 50

typedef struct {
    char name[SL];
    int rate;
    char place[SL];
} typeAct;

typeAct returnOne(){
    typeAct temp;
    //name
    puts("Enter the name of activity: ");
    fflush(stdin);
    gets(temp.name);
    for(int i=0; i < strlen(temp.name); i++) temp.name[i] = tolower(temp.name[i]);
    puts(temp.name);
    //rate
    do{
        puts("Enter the rating (1-5): ");
        scanf("%d", &temp.rate);
        if(temp.rate<1 || temp.rate>5) puts("Data Error");
    } while(temp.rate<1 || temp.rate>5);
    //place
    puts("Enter the place: ");
    fflush(stdin);
    gets(temp.place);
    for(int i=0; i < strlen(temp.place); i++) temp.place[i] = tolower(temp.place[i]);
    puts(temp.place);
    return temp;
}

void goOn(bool c, int l){
    char f[4];
    do{
        puts("Would you like to continue? (yes or no)");
        fflush(stdin);
        gets(f);
        for(int i=0; i<3; i++) f[i] = tolower(f[i]);
        puts(f);
        if((strcmp(f, "yes") != 0) && (strcmp(f, "no") != 0)) puts("Data error");
    } while((strcmp(f, "yes") != 0) && (strcmp(f, "no") != 0));

    /*
    if(strcmp(f, "yes") == 0) {
        c=true;
        l++;
    } else if (strcmp(f, "no") == 0){
        c=false;
        */

    c=false;

    return;
}

void dataIn(typeAct m[], int l) {
    bool c=true;
    int i=0;
    while(c==true){
        m[i] = returnOne();
        i++;
        goOn(c, l);
    }
    return;
}
void dataOut(typeAct m[], int l) {
    printf("%d", l);
    return;
}

int main() {
    int cant=1;
    typeAct sports[cant];
    dataIn(sports, cant);
    dataOut(sports, cant);
    return 0;
}