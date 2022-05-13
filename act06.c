#include <stdio.h>

int main(){
    double base;
    double height;  
    double result;
    printf("Enter the base: \n");
    scanf("%lf", &base);
    printf("Enter the height: \n");
    scanf("%lf", &height);
    result = (base * height)/2;
    printf("The triangle area is %lf", result);
    return 0;
} 
