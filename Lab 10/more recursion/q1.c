/*1. Write a recursive function that calculates the sum of digits of a number. For example, ifthe input is 123, the output should be 6.*/


#include <stdio.h>
int recurSum(int);
int main()
{
    int num;
    printf("Enter number: ");
    scanf("%d", &num);
    printf("sum of digits is %d", recurSum(num));
}


int recurSum(int num)
{
    if(num == 0)
    {
        return 0;
    }
    else
    {
        return (num % 10) + recurSum(num / 10);
    }


}
