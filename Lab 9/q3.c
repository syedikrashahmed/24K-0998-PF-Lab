/*3. Implement a function that checks if a given integer is a prime number. Use this function in the
main program to check if numbers entered by the user are prime.*/
#include <stdio.h>
int prime(int num);
int main()
{
	int num, flag;
	printf("enter number: ");
	scanf("%d", &num);
	flag = prime(num);
	if(flag == 1)
	{
	     printf("is Prime"); 
	 }
	 else 
	 {
	     printf("Not Prime");    
	 }
}

int prime(int num)
{
    int isprime = 1;
    if(num> 1)
    {
        for(int i=2 ; i < num; i++)
        {
            if(num % i == 0)
            {
                isprime = 0;
                break;
            }
        }
        return isprime;
    }
    else
    {
        return 0;
    }   
    
}