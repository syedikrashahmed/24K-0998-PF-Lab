/*2. Create a C program that swaps the values of two integers using a user-defined function,

#include <stdio.h>
void swapIntegers(int num1, int num2);
int main()
{
	int num1, num2;
	printf("enter num 1: ");
	scanf("%d", &num1);
	printf("enter num 2: ");
	scanf("%d", &num2);
	swapIntegers(num1, num2);
}

void swapIntegers(int num1, int num2)
{
        int temp = num1;
        num1 = num2;
        num2 = temp;
        printf("Num 1 is %d and Num 2 is %d", num1, num2);
}