#include <stdio.h>

int main() {
    char employee_name[100];
    float hours_worked, rate_per_hour, gross_pay, tax;

    
    printf("Enter employee name: ");
    fgets(employee_name, sizeof(employee_name), stdin); 

    printf("Enter hours worked: ");
    scanf("%f", &hours_worked);

    printf("Enter rate per hour: ");
    scanf("%f", &rate_per_hour);

    
    gross_pay = hours_worked * rate_per_hour;

    
    if (gross_pay > 100000) {
        tax = gross_pay * 0.20; 
    } else if (gross_pay >= 50000) {
        tax = gross_pay * 0.10; 
    } else {
        tax = 0; 
    }


    printf("\nEmployee Name: %s", employee_name);
    printf("Gross Pay: $%.2f\n", gross_pay);
    printf("Tax: $%.2f\n", tax);
    printf("Net Pay: $%.2f\n", gross_pay - tax); 

    return 0;
}
