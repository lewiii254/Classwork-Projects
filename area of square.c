#include <stdio.h>
int main()
{
	int side, area;
	printf("Enter the Side Length:" );
	scanf("%d", &side);
	area=side*side;
	printf("The area of the Square is %d",area);
	return 0;
}