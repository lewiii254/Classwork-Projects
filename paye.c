#include <stdio.h>

int main() {
    char employee_name[100];
    float hours_worked, rate_per_hour, gross_pay, tax, net_pay;

    // Input employee details
    printf("Enter employee name: ");
    fgets(employee_name, sizeof(employee_name), stdin); // Read string with spaces

    printf("Enter hours worked: ");
    scanf("%f", &hours_worked);

    printf("Enter rate per hour: ");
    scanf("%f", &rate_per_hour);

    // Calculate gross pay
    gross_pay = hours_worked * rate_per_hour;

    // Calculate tax based on gross pay
    if (gross_pay >= 50000) {
        tax = gross_pay * 0.15; // 15% tax
    } else {
        tax = gross_pay * 0.10; // 10% tax
    }

    // Calculate net pay
    net_pay = gross_pay - tax;

    // Output the results
    printf("\nEmployee Name: %s", employee_name);
    printf("Gross Pay: $%.2f\n", gross_pay);
    printf("Tax: $%.2f\n", tax);
    printf("Net Pay: $%.2f\n", net_pay);

    return 0;
}
