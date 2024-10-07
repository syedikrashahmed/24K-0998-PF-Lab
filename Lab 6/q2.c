//2. Write a program to check whether a given number is prime or not.
#include <stdio.h>
int main()
{
        int i, num;
        char prime = 'n' ;
        printf("enter num: ");
        scanf("%d", &num);
        for (i = num - 1 ; i > 1 ; i--)
        {
            if (num % i == 0)
            { prime = 'y'; }
        }
        switch (prime)
        {
            case 'n': printf("is prime");
            break;
            case 'y' : printf("is not prime");
            break;
            default:;
        }
}