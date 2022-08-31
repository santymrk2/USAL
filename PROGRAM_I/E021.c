//Actividad 21 -- Santiago Mercado -- 2022
#include <stdio.h>
#define D 3
//Se ingresarán por teclado el legajo y las notas de los alumnos
//Primero se preguntará la cantidad de alumnos del curso
//Luego, de cada uno, se ingresa su legajo y dos notas.
//Los legajos son números de cinco cifras.
//Las notas son números enteros del cero al diez.
//Al finalizar mostrar todos los datos en columnas.

int numberStudents();
void scanID(int dataBase[][D], int i, int j);
void scanG(int dataBase[][D], int i, int j);
void enterData(int dataBase[][D], int q);
void printData(int dataBase[][D], int q);

int main() {
    int q = numberStudents();
    int dataBase[q][D];
    enterData(dataBase, q);
    printData(dataBase, q);
    return 0;
}

int numberStudents() {
    int q;
    do{
        puts("Enter the number of students: ");
        scanf("%d", &q);
        fflush(stdin);
        if(q<=0) puts("Error, put a number higher than 0\n");
    } while(q<=0);
    return q;
}

void scanID(int dataBase[][D], int i, int j){
    do{
        puts("Enter the ID ('five numbers'): ");
        scanf("%d", &dataBase[i][j]);
        fflush(stdin);
        if(dataBase[i][j]<9999 && dataBase[i][j]>100000) puts("Error, incorrect input");
    } while(dataBase[i][j]<9999 && dataBase[i][j]>100000);
}

void scanG(int dataBase[][D], int i, int j){
    do{
        printf("Enter the grade %d: ", j-1);
        scanf("%d", &dataBase[i][j]);
        fflush(stdin);
        if(dataBase[i][j]<0 || dataBase[i][j]>10) puts("Error, incorrect input");
    } while(dataBase[i][j]<0 || dataBase[i][j]>10);
}

void enterData(int dataBase[][D], int q) {
    for(int i=0; i < q; i++) {
        //legajo
        scanID(dataBase, i , 1);
        //nota 1
        scanG(dataBase, i , 2);
        //nota 2
        scanG(dataBase, i , 3);
    }
}

void printData(int dataBase[][D], int q) {
    puts("ID\tG1\tG2");
    for(int i=0; i < q; i++) {
        printf("%5d\t%2d\t%2d\t    \n", dataBase[i][1], dataBase[i][2], dataBase[i][3]);
    }
}
