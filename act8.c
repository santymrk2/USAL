#include <stdio.h>

int main(){
    int num1;
    int num2;
    int num3;
    printf("Enter the first number: \n");
    scanf("%d", &num1);
    printf("Enter the second number: \n");
    scanf("%d", &num2);
    printf("Enter the third number: \n");
    scanf("%d", &num3);
    if(num1 > num2){
        if(num1 > num3) {
            printf("The biggest number is %d", num1);
        } else if(num3 > num1) { 
            printf("The biggest number is %d", num3);
        } else {
            printf("Error");
        }
    } else {
        if(num2 > num3) { 
            printf("The biggest number is %d", num2);
        } else {
            printf("The biggest number is %d", num3);
        }
    }
    return 0;
}
