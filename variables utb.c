#include <stdio.h>
int main()
{
	/*this is my first code in c language im very passionate in learning it.*/
	
	char characterName[]= "MARK";
	int characterAge = 25;
	printf("There was once a man named %s\n",characterName);
	printf("He was %d years old.\n",characterAge);
	characterAge = 30;
	printf("He really liked the Name %s\n",characterName); 
	printf("but did not like being %d.\n",characterAge);
	printf("my favourite %s is %d\n","number", 500);
	printf("print a decimal number which is %f\n",500.5678);
	int age;
	printf("Enter your age:");
	scanf("%d", &age);
	printf("You are %d years old.\n",age);
	double gpa;
	printf("Enter your gpa:" );
	scanf("%lf", &gpa);
	printf("Your GPA is %f\n",gpa);
	char name[20];
	printf("Enter your name: ");
	scanf("%s",name);
	printf("Your name is %s ", name);
	
	
	
	
	return 0;
}