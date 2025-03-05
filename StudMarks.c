#include<stdio.h>
int main()
{
	char name[20];float eng, kis, maths, total, average;
	printf("Enter The Student Name:");
	fgets(name,sizeof(name),stdin);
	printf("Enter English Marks:");
	scanf("%f", &eng);
	printf("Enter Kiswahili Marks:");
	scanf("%f", &kis);
	printf("Enter Maths Marks:");
	scanf("%f", &maths);
	total=eng+kis+maths;
	average=total/3;
	printf("Student name is: %s",name);
    printf("Total marks are %f\n",total);
	printf("The Average mark is %f",average);
	return 0;
}