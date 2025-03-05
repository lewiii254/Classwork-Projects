#include <stdio.h>
int main()
{
	int i; char name[10];
	printf("Enter Name:");
	for(i=0;i<10;i++)
		scanf("%c", &name[i]);
	printf("Name In Reverse: ");
	for(i=9;i>=0;i--)
		printf("%c", name[i]);

	return 0;
}