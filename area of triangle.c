#include <stdio.h>
int  main()
 { int ht,bs; //variable declaration
 	float area;
	printf( "Enter base" );
	scanf("%d",&bs);
	printf("enter height");
	scanf("%d",&ht);
	area=0.5*bs*ht;
	printf("area is %f",area);
	 return  0;
}