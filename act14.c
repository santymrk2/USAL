#include <stdio.h>

int main(){
    int may=0, min=0, cero=0, theNum;
    for(int i=0; i<10; i++) {
        printf("Ingrese un numero: ");
        scanf("%d", &theNum);
        if(theNum>0){
            may++;
        } else if(theNum<0) {
            min++;
        } else {
            cero++;
        }
    }
    printf("Higher than cero: %d,\nSmaller than cero: %d,\n Cero's: %d", may, min, cero);
}
