/* 3. Using the above program integrate the number if it is a prime and print the Fibonacci series till that
number.

Example

Input: 5 
Output:
Number is prime

Series is = 0 1 1 2 3 */
#include <stdio.h>
int main()
{
        int i, num, temp = 1; 
        int num1 = 0; 
        int num2 = 1;
        char prime = 'y' ;
        printf("enter num: ");
        scanf("%d", &num);
        for (i = num - 1 ; i > 1 ; i--)
        {
            if (num % i == 0)
            { prime = 'n'; }
        }
        switch (prime)
        {
            case 'y': 
                printf("is prime\n");
                if (num == 1)
                { printf("Series is = 0"); }
                else if(num == 2)
                { printf("Series is = 0 1"); }
                else
                {    printf("Series is = 0 1");
                     for(i=2 ; i<num ; i++)
                     {
                            printf(" %d", temp);
                            num1 = num2;
                            num2 = temp;
                            temp = num1 + num2;
                     }
                }
            break;
            case 'n' : printf("is not prime");
            break;
            default:;
        }
}