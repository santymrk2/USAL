#include <stdio.h>
#define MAX 100
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if(num>MAX) {
        printf("Es mayor");
    }
}