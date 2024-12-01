/*Task 2: Write a program to implement the exchange or swap the values of 3 variables{a,b,c}. Toimplement this, you need to write a function called swaped().
void swaped(int *aPtr, int *bPtr, int *cPtr);
such that;
b ----> temp
a ----> b
c ----> a
temp -> a*/
#include <stdio.h>

void swaped(int *aPtr, int *bPtr, int *cPtr);

int main()
{
	int a = 1, b = 2, c = 3;
	swaped(&a, &b, &c);
	printf("a = %d\nb = %d\nc = %d", a, b, c);
	
}

void swaped(int *aPtr, int *bPtr, int *cPtr)
{
    int temp= *bPtr;
    *bPtr = *cPtr;
    *cPtr = *aPtr;
    *aPtr = temp;
}