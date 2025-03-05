#include <stdio.h>
int main()
{
	   int i,num[8],tot;
	   tot=0;
	   for(i=0;i<8;i++){
		   printf("Enter Numbers: ");
		   scanf("%d",&num[i]);
		   tot=tot+num[i];
	   }
	   printf("Total is %d",tot);	
	return 0;
}