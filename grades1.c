#include <stdio.h>
int main()
{
	char grd;
	printf("Enter Grade: ");
	scanf("%c",&grd);
	switch(grd)
	{
	case 'A':printf("Excellent");
		break;
	case 'B':printf("Good");
		break;
	case 'C':printf("Average");
		break;	
	case 'D':printf("Below Average");
		break;
	
	default: printf("Error");

	}
}