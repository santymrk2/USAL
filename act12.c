#include <stdio.h>

#define MIN_INSURANCE 85
#define MON_HOUR 210
#define MAX_NAME 15
#define POR_INSURANCE 0.035

int main() {
    int salary;
    int insurance;
    int gross_salary;
    char name[MAX_NAME];
    int hours;
    printf("Enter your name: \n");
    scanf("%s", name);
    printf("Enter your hours: \n");
    scanf("%d", &hours);
    gross_salary = hours * MON_HOUR;
    if (gross_salary < 2500) {
        insurance = MIN_INSURANCE;
    } else {
        insurance = insurance * POR_INSURANCE;
    }
    salary = gross_salary - insurance;
    printf("Hi %s,\n Gross salary: %d \n Insurance: %d \n Salary to pay: %d", name, gross_salary, insurance, salary);
    return 0;
}
    
