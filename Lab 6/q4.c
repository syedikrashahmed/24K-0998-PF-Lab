/* 4. Write a program to check whether a number is an Armstrong number or not. An Armstrong number is

#include <stdio.h>
int main()
{
    int num, armstrong = 0, digit, userin; 
    printf("enter an Armstrong number: ");
    scanf("%d", &userin);
    num = userin;
    while(num != 0)
    {
        digit = num % 10;
        armstrong = armstrong + (digit * digit * digit);
        num = num / 10;
    }
    if(armstrong == userin)
    { printf("is Armstrong"); }
    else
    { printf("is not Armstrong"); }
}