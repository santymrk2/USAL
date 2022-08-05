#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TRY 10

int main() {
    int myNum, player;
    srand(time(NULL));
    myNum = rand() % 50;
    puts("What number am I thinking of (between 0 and 49)?");
    for(int i=0; i<TRY; i++){
        scanf("%d", &player);
        if(player==myNum){
            printf("Congrulations, you've won");
            i=TRY;
        } else printf("Incorrect!\n");
    }
    printf("The number was: %d", myNum);
        return 0;
}

/*
Desafío 1: Juego de adivinanza v.1
Generar un número secreto al azar entre 0 y 49. No mostrarlo al usuario. Luego, el
usuario intentará adivinar ese número en máximo 10 intentos. Si lo logra, felicitarlo. Si
no lo logra, darle a conocer el nro. secreto.
Tip: utilizar la función rnd() para generar el nro al azar y luego para limitarlo entre 0 y
49, calcular el resto de dividir por 50 (nro_secreto = nro_azar % 50).*/
