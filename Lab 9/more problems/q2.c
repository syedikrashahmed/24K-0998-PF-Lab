/*2. Write a function that checks if a given number is even or odd.*/
#include <stdio.h>
int evenodd(int);
int main()
{
	int num;
	printf("enter num: ");
	scanf("%d", &num);
	if(evenodd(num) == 1)
	{
	    printf("odd number");   
	}
	else if(evenodd(num) == 0)
	{
	    printf("even number");   
	}
}
int evenodd(int num)
{
    if(num % 2 == 1 || num % 2 == -1)
    {
        return 1;  
    }
    else
    {
        return 0;    
    }
}