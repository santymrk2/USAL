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
            printf("Congrulations, you've won\n");
            i=TRY;
        } else {
            if(player>myNum) {
                printf("The number is smaller than your number\n");
            } else {
                printf("The number is bigger than your number\n");
            }
        }
    }
    printf("The number was: %d", myNum);
        return 0;
}
