/* Trabajo Practico Final
Santiago Mercado Carbone - 2022 */
#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
#include <string.h>
#define STRLEN 100

typedef struct {
    char name[STRLEN];
    char floor;
    int persons;
    int hour;
    bool parking;
} BOOKING;


void nameRead(char a[]){
    puts("Enter the booking name: ");
    gets(a);
    fflush(stdin);
    for(int i=0; i < strlen(a); i++) toupper(a[i]);
    return;
}
char floorRead(){
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
    int hour;
    do{
        puts("Enter the hour whithout ':' (example: 17:30 = 1730):");
        scanf("%d", &hour);
        fflush(stdin);
        if(hour < 0 || hour > 2359) puts("Error, data incorrect\n");
    }while(hour < 0 || hour > 2359);
    return hour;
}
bool parkingRead(){
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
    nameRead(reserva -> name);
    reserva -> floor = floorRead();
    reserva -> persons = personsRead();
    reserva -> hour = hourRead();
    reserva -> parking = parkingRead();
    return;
}


void addRegister() {
    // Carga de datos en memoria
    BOOKING book;
    fillData(&book);
    // Carga de datos en el archivo .txt
    FILE *add = fopen("data.txt", "a");
    if(add == NULL) {
        printf("Error reading the file");
    } else {
        // Aca agrego una nueva reserva con todas sus variables
        fprintf(add, "%s %c %d %d %d", book.name, book.floor, book.persons, book.hour, book.parking);
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
        // Aca veo todas la reservas hechas con sus datos encolumnados
        puts("Name     Floor    Persons  Hour    Parking");
        for (int i=0; fscanf(view, "%s %c %d %d %d", book.name, book.floor, book.persons, book.hour, book.parking) == 5; i++){
            printf("%s       %c       %d       %d      %d", book.name, book.floor, book.persons, book.hour, book.parking);
        }
        printf("%s", book.name);
    }
    fclose(view);
    return;
}
void peopleSecondFloor() {
    // Aca sumo la cantidad de personas que iran al SecondFloor
    return;
}
void closeMenu(bool* n) {
    *n = false;
    return;
}

int askOptions() {
    int a;
    puts("Chose an option with the number:\n>>> 1: Make a reservation;\n>>> 2: View of all reservations\n>>> 3: Person Quantity in second floor \n>>> 4: Exit\n");
	do{
		scanf("%d", &a);
        fflush(stdin);
		if(a < 1 || a > 4) puts("Error, enter a number between 1 and 4\n");
	} while (a < 1 || a > 4);
    return a;
}

void menu() {
    bool persist = true;
    while(persist == true) {
        int options = askOptions();
        switch (options){
            case 1: addRegister(); break;
            case 2: viewData(); break;
            case 3: peopleSecondFloor(); break;
            case 4: closeMenu(&persist); break; // Creo que no es necesario el ampersand, pensar porque ...
        }
    }
    return;
}

int main(){
    menu();
    return 0;
}