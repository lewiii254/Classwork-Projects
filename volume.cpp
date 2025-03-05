#include <stdio.h>
int main()
{
	float rad, h, vol;
	printf("Enter the Radius");
	scanf("%f", &rad);
	printf("Enter the Height");
	scanf("%f", &h);
	vol=3.142*rad*rad*h;
	printf("volume is %f",vol);
	 
}