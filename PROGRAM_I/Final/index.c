/* Trabajo Practico Final
Santiago Mercado Carbone - 2022 */
#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
#include <string.h>
#define STRLEN 100
#define CAP 80

typedef struct {
    char name[STRLEN];
    char floor;
    int persons;
    int hour;
    bool parking;
} BOOKING;


void nameRead(char a[]){
    // En esta funcion se ingresa el nombre de la reserva
    puts("Enter the booking name: ");
    gets(a);
    fflush(stdin);
    for(int i=0; i < strlen(a); i++) {
        a[i] = toupper(a[i]);
    }
    return;
}
char floorRead(){
    // En esta funcion se ingresa el piso deseado
    char floor;
    do{
        puts("Enter the desired floor (B='Basement level' G='Ground level' F='First level'):");
        scanf("%c", &floor);
        fflush(stdin);
        floor = toupper(floor);
        if (floor != 'F' && floor != 'G' && floor != 'B') puts("Error, data incorrect\n");
    }while (floor != 'F' && floor != 'G' && floor != 'B');
    return floor;
}
int personsRead(){
    // En esta funcion se ingresa la cantidad de personas para esa reserva
    int persons;
    do{
        puts("Enter the number of diners: ");
        scanf("%d", &persons);
        fflush(stdin);
        if (persons < 0) puts("Error, data incorrect\n");
    }while (persons < 0);
    return persons;
}
int hourRead(){
    // En esta funcion se ingresa el horario deseado eligiendo una de las opciones
    int hour;
    do{
        puts("Enter the arrival time (chose an option):\n>> 1. 12:00\n>> 2. 13:30\n>> 3. 15:00\n>> 4. 19:00\n>> 5. 20:30\n>> 6. 22:00");
        scanf("%d", &hour);
        fflush(stdin);
        if(hour < 1 || hour > 6) puts("Error, data incorrect\n");
    }while(hour < 1 || hour > 6);
    switch(hour){
        case 1: hour = 1200; break;
        case 2: hour = 1330; break;
        case 3: hour = 1500; break;
        case 4: hour = 1900; break;
        case 5: hour = 2030; break;
        case 6: hour = 2200; break;
    }
    return hour;
}
bool parkingRead(){
    // En esta fucnion se pregunta si se desea utilizar el estacionamiento
    char parking;
    bool n;
    do{
        puts("Enter 'Y' if you want to use the parking or 'N' if you not");
        scanf("%c", &parking);
        fflush(stdin);
        parking = toupper(parking);
        if(parking != 'Y' && parking != 'N') puts("Error, invalid data");
    } while(parking != 'Y' && parking != 'N');
    if (parking == 'Y'){
        n = true;
    } else {
        n = false;
    }
    return n;
}
void fillData(BOOKING* reserva) {
    // Esta funcion esta encargada de llenar llenar todos los datos de una reserva llamando a las fucniones especificas
    nameRead(reserva -> name);
    reserva -> floor = floorRead();
    reserva -> persons = personsRead();
    reserva -> hour = hourRead();
    reserva -> parking = parkingRead();
    return;
}

void addRegister() {
    BOOKING book;
    fillData(&book);
    FILE *add = fopen("data.txt", "a");
    if(add == NULL) {
        printf("Error reading the file");
    } else {
        // Agrego una nueva reserva con todas sus variables
        fprintf(add, "%s %c %d %d %d\n", book.name, book.floor, book.persons, book.hour, book.parking);
    }
    fclose(add);
    return;
}
void viewData() {
    BOOKING book;
    FILE *view = fopen("data.txt", "r");
    if(view == NULL) {
        printf("Error reading the file");
    } else {
        // Aca veo todas la reservas hechas con sus datos encolumnados, primero se  imprimen los del primer piso, luego los de planta baja y por ultimo el subsuelo.
        puts("Name           Floor      Persons        Hour        Parking");
        for (int i=0; fscanf(view, "%s %c %d %d %d", book.name, &book.floor, &book.persons, &book.hour, &book.parking) == 5; i++){
            if(book.floor == 'F') {
                printf("%-15s  %-10c  %-10d  %-10d  %-10d\n", book.name, book.floor, book.persons, book.hour, book.parking);
            }
        }
        fclose(view);
        view = fopen("data.txt", "r");
        for (int i=0; fscanf(view, "%s %c %d %d %d", book.name, &book.floor, &book.persons, &book.hour, &book.parking) == 5; i++){
            if(book.floor == 'G') {
                printf("%-15s  %-10c  %-10d  %-10d  %-10d\n", book.name, book.floor, book.persons, book.hour, book.parking);
            }
        }
        fclose(view);
        view = fopen("data.txt", "r");
        for (int i=0; fscanf(view, "%s %c %d %d %d", book.name, &book.floor, &book.persons, &book.hour, &book.parking) == 5; i++){
            if(book.floor == 'B') {
                printf("%-15s  %-10c  %-10d  %-10d  %-10d\n", book.name, book.floor, book.persons, book.hour, book.parking);
            }
        }
        fclose(view);
    }
    return;
}
void peopleFirstFloor() {
    // Esta funcion se encarga de contar la cantidad de personas que iran al FirstFloor
    BOOKING book;
    int q = 0;
    FILE *view = fopen("data.txt", "r");
    if(view == NULL) {
        printf("Error reading the file");
    } else {
        // Por cada registro se verifica que sea del primer piso y luego que sea en la cena (19:00 hs o mas )
        for (int i=0; fscanf(view, "%s %c %d %d %d", book.name, &book.floor, &book.persons, &book.hour, &book.parking) == 5; i++) {
            if(book.floor == 'F'){
                if(book.hour >= 1900) {
                    q = q + book.persons;
                }
            }
        }
        if(q >= CAP) {
            // ya que al ingresar los datos no se advierte que no hay mas lugar en el primer piso, esta funcion se encarga de decir cual es el exceso o cual es la disponibilidad.
            printf("Sorry, we have no room in the first level for dinner (excess = %d)\n", q-CAP);
        } else {
            printf("Yes, we have %d rooms left\n", CAP-q);
        }
    }
    fclose(view);
    return;
}
void splitTxt() {
    // Esta funcion se encarga de dividir el archivo de texto en dos nuevos donde uno posee las reservas que utilizan parking y otro los que no.
    BOOKING book;
    FILE *view = fopen("data.txt", "r");
    FILE *truePark = fopen("truePark.txt", "w");
    FILE *falsePark = fopen("falsePark.txt", "w");
    if(view == NULL) {
        printf("Error reading the file");
    } else {
        for (int i=0; fscanf(view, "%s %c %d %d %d", book.name, &book.floor, &book.persons, &book.hour, &book.parking) == 5; i++){
            if(book.parking == true) {
                fprintf(truePark, "\n%s %c %d %d %d", book.name, book.floor, book.persons, book.hour, book.parking);
            } else {
                fprintf(falsePark, "\n%s %c %d %d %d", book.name, book.floor, book.persons, book.hour, book.parking);
            }
        }
    }
    fclose(truePark);
    fclose(falsePark);
    fclose(view);
    return;
}
void closeMenu(bool* n) {
    *n = false;
    return;
}

int askOptions() {
    int a;
    puts("\nChose an option with the number:\n>>> 1: Make a reservation;\n>>> 2: View of all reservations\n>>> 3: Person Quantity on first floor \n>>> 4: Split file by parking\n>>> 5: Exit\n");
	do{
		scanf("%d", &a);
        fflush(stdin);
		if(a < 1 || a > 5) puts("Error, enter a number between 1 and 5\n");
	} while (a < 1 || a > 5);
    return a;
}

void menu() {
    bool persist = true;
    while(persist == true) {
        int options = askOptions();
        switch (options){
            case 1: addRegister(); break;
            case 2: viewData(); break;
            case 3: peopleFirstFloor(); break;
            case 4: splitTxt(); break;
            case 5: closeMenu(&persist); break;
        }
    }
    return;
}

int main(){
    menu();
    return 0;
}