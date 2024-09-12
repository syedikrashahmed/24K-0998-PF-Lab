/*Write a C program to check whether a number is multiple of 3 or not. If it is then print “This number is multiple of 3”, otherwise print “This number is not multiple of 3”.*/

#include <stdio.h>
int main()
{
	int num;
	printf("number: ");
	scanf("%d", &num);
	if (num % 3 == 0)
	{printf("This number is multiple of 3");}
	else 
	{printf("This number is not multiple of 3");}
}