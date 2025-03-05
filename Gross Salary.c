#include <stdio.h>
int main()
{
	char employeeName[20];
	float hoursWorked, ratePerHour, grossSalary;
	printf("Enter Emoloyee Name:");
	fgets(employeeName,sizeof(employeeName),stdin);
	printf("Enter Hours Worked:");
	scanf("%f", &hoursWorked);
	printf("Enter The Rate Per Hour:");
	scanf("%f", &ratePerHour);
	grossSalary=hoursWorked*ratePerHour;
	printf("Employee name is: %s",employeeName);
	printf("Gross salary is : $%f\n",grossSalary);
	return 0;
}