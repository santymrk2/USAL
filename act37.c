#include <stdio.h>
#define Q 20

int main() {
    int even[Q], odd[Q], n, meterE=0, meterO=0;
    puts("Enter numbers: ");
    for(int i=0; i<Q; i++){
        fflush(stdin);
        scanf("%d", &n);
        if(n%2==0) {
            even[meterE]=n;
            meterE++;
        } else {
            odd[meterO]=n;
            meterO++;
        }
    }
    printf("Even quantity: %d \nEven numbers: \n", meterE);
    for(int i=0; i<meterE; i++) {
        printf("%d; ", even[i]);
    }
    printf("\nOdd quantity: %d \nOdd numbers: \n", meterO);
    for(int i=0; i<meterO; i++) {
        printf("%d; ", odd[i]);
    }
    return 0;
}

