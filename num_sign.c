#include <stdio.h>
int main()
{
	int x, y;
	float ans;
	char sign;
	printf("Enter Number: ");
	scanf("%d", &x);
	printf("Enter 2nd Number: ");
	scanf("%d", &y);
	printf("Enter sign: ");
	scanf("%c",&sign);
	switch(sign)
	{
	case '+': ans=x+y;
		break;
	case '-': ans=x-y;
		break;
	case '*': ans=x*y;
		break;
	case '/': ans=x/y;
		break;	
	default: printf("Error");
	printf("answer %f", ans);

	}
	
}