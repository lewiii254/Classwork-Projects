#include <stdio.h>
int main()
{
	float cel, f;
	printf("Enter Temperature in Celcius:");
	scanf("%f", &cel);
	f=((cel*9/5)+32);
	printf("The Temperature in Farenheight is:%f", f);
	return 0;
}