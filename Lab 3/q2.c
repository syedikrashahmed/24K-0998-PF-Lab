//QUESTION#2
//Write a C program that takes two integer values as input from the user. Then swap the values taken from the user and display the output of the variables. 

#include <stdio.h>
int main()
{
	int num1, num2 ;
	printf("Enter integer 1: ");
	scanf("%d", &num1);
	printf("\nEnter integer 2: ");
	scanf("%d", &num2);
	int temp;
	temp = num1;
	num1 = num2;
	num2 = temp;
	printf("Integer 1 is %d", num1);
	printf("\nInteger 2 is %d", num2);
}