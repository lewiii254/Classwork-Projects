#include <stdio.h>
int main()
{
	   int i,num[8],low,high;
	   low=1000;high=0;
	   for(i=0;i<8;i++){
		   printf("Enter Numbers: ");
		   scanf("%d",&num[i]);
		   if(num[i]>high) high=num[i];
		   if(num[i]<low) low=num[i];
	   }
   
	   printf("Biggest number %d",high);
	   printf("Smallest number %d",low);	
	return 0;
}