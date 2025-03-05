#include <stdio.h>
#include <stdlib.h>

int main()
{
   	double num1;
	double num2;
	printf("Enter First Number: ");
	scanf("%lf", &num1);
	printf("Enter Second Number: ");
	scanf("%lf", &num2);
	
	printf("ANSWER: %f", num1 +num2);
	return 0;
}