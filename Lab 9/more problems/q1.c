/*1. Write a C function that takes two numbers as input and returns their product.*/
#include <stdio.h>
int product(int, int);
int main()
{
	int num1, num2;
	printf("enter number 1: ");
	scanf("%d", &num1);
	printf("enter number 2: ");
	scanf("%d", &num2);
	printf("product is %d", product(num1, num2));
}

int product(int num1, int num2)
{
    return num1 * num2;    
}