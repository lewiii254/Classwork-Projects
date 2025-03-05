#include <stdio.h>
int main()
{
	char vname[10];
	int age;
	printf("Enter Voter's Name: ");
	scanf("%s", &vname);
	printf("Enter Age: ");
	scanf("%d", &age);
	if (age>=18) printf("vote");
	else printf("Not Allowed to Vote");
	return 0;
}