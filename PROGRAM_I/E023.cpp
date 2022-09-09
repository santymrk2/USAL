#include <stdio.h>
#include <ctype.h>

float calcSup(float s){
    return s*s;
}
float calcPer(float s){
    return s*4;
}

float readSide(){
    float s;
    do{
        puts("Ingrese el lado");
        scanf("%f", &s);
        fflush(stdin);
        if(s<=0) puts("Error, intente neuvamente");
    } while(s<=0);
    return s;
}

void printSyP(float s, float p) {
    printf("Perimetro: %f,\nSuperficie: %f,", s, p);
}

int main() {
    float lado = readSide(), sup = calcSup(lado), per = calcPer(lado);
    printSyP(sup, per);
    return 0;
}
