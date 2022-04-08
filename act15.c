#include <stdio.h>

int main(){
    int num, final=1;
    printf("Enter a number: ");
    scanf("%d", &num);
    do {
        printf("%d+", final);
        final++;
    } while (final<num);
    printf("%d", num);
    return 0;
}
