/*3. Create a program with a constant that defines the maximum allowable temperature (in
#include <stdio.h>
static int count = 0;
void check(int userin, int maxtemp);
int main()
{
	int max, choice, userin;
	printf("enter max temperature allowed: ");
	scanf("%d", &max);
	const int maxtemp = max;
	while(1)
	{
	    printf("1 for input, 2 for end: ");
	    scanf("%d", &choice);
	    if (choice == 1)
	    {
	        printf("Input Temp: ");
	        scanf("%d", &userin);
	        check(userin, maxtemp);  
	    }
	    else if (choice == 2)
	    {
	        break;    
	    }	         
	}
	printf("time temperature exceeded: %d", count);
}

void check(int userin, int maxtemp)
{
    if (userin > maxtemp)
    {
        count++;
        printf("Exceeds Maximum Temperature\n");    
    }   
    else
    {
            printf("Does not exceed Maximum Temperature\n");    
    }
}