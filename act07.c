#include <stdio.h>
#define MAX 15

int main(){
    char name[MAX];
    printf("Hi, what is your name? \n");
    scanf("%s", name);
    printf("Hi %s", name);
    return 0;
}
