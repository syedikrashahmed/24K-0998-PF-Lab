/*1. Write a C program that generates a sequence of prime numbers within a given range using
nested loops.*/

#include <stdio.h>
int main()
{
    int lower, upper, i, j;
    printf("Enter lower bound of sequence: ");
    scanf("%d", &lower);
    printf("Enter upper bound of sequence: ");
    scanf("%d", &upper);

    for (i = lower; i <= upper; i++)
    {
        int flag = 0;
        for(j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            printf(" %d", i);
        }
    }
}
