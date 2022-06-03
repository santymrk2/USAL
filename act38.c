#include <stdio.h>
#define Q 10

int main() {
    char lett[Q];
    puts("Enter 10 words: \n");
    for(int i = 0; i < Q; i++) {
        scanf("%c", &lett[i]);
    }
    for(int i = 0; i < Q; i++) {
        printf("%c, ", lett[i]);
    }
    return 0;
}
