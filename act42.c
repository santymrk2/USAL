#include <stdio.h>
#define LON 10

int main(){
    int A [LON], B [LON], C [LON];
    puts("Enter 10 numbers for the first array");
    for (int i=0; i<LON; i++){
        scanf("%d", &A[i]);
    }
    puts("Enter 10 numbers for the second array");
    for (int i=0; i<LON; i++){
        scanf("%d", &B[i]);
    }
    for (int i=0; i<LON; i++){
        if(A[i]<B[i]){
            C[i] = B[i];
        } else if (A[i]> B[i]) {
            C[i] = A[i];
        } else {
            C[i] = A[i];
        }
    }

    
    puts("Array A");
    for (int i=0; i<LON; i++) printf("%d\n", A[i]);
    puts("Array B");
    for (int i=0; i<LON; i++) printf("%d\n", B[i]);
    puts("Array C");
    for (int i=0; i<LON; i++) printf("%d\n", C[i]);

    return 0;
}
