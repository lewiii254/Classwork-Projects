#include   <stdio.h>
#include   <stdbool.h>

int  main() {
	printf( "Leap Year \n" );
	printf( "\n" );

	 int  year;

	printf( "Enter the year to be checked \n" );
	scanf( "%d" , &year);
	printf( "\n" );

	 bool   isLeapYear =  true ;

	 //Leap year checker
	 if  (year % 4 != 0)
	{
		isLeapYear =  false ;
	}
	 else     if  (year % 100 != 0)
	{
		isLeapYear =  true ;
	}
	 else     if  (year % 400 != 0)
	{
		isLeapYear =  false ;
	}
	 else
	{
		isLeapYear =  true ;
	}

	 if  (isLeapYear)
	{
		printf( "It is a Leap Year \n" );
	}
	 else
	{
		printf( "Not a Leap Year \n" );
	}
	printf( "\n" );

	 return  0;
}
