#include <stdio.h>

int main() {
    int counter;
    counter = 0;
    do
	{
		
        printf("%d", counter);
        printf("\n");
        counter=counter++;
    }while(counter>=10);
}