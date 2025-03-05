#include <stdio.h>

/*function declaration
	* name		: getBinary
	* Desc		: to get binary value of decimal number
	* Parameter	: int -integer number
	* return	: void
*/
void getBinary(int);

int main()
{
    int num=0;
    printf("Enter an integer number :");
    scanf("%d",&num);
    printf("\nBinary value of %d is =",num);
    getBinary(num);
    return 0;
}

/*Function definition : getBinary()*/
void getBinary(int n)
{
    int loop;
    /*loop=15 , for 16 bits value, 15th bit to 0th bit*/
    for(loop=15; loop>=0; loop--)
    {
        if( (1 << loop) & n)
            printf("1");
        else
            printf("0");
    }
}