#include<string.h>
#include<stdio.h> 
int main() { 
char mystring[10]; 
printf("Enter your string "); 
scanf("%s", &mystring); 
printf("string to upper case is %s", strupr(mystring)); 
} 
