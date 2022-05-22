#include <stdio.h>
#define WD 15

int main(){
    float array[WD];
    for(int i=0; i<WD; i++){
        array[i] = 0;
        printf("%.2f\n", array[i]);
    }
    return 0;
}
