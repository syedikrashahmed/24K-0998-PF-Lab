/*3. Write a program that calculates the length of a string using a pointer. Do not use the built-instrlen() or sizeof() function. After length calculation reverse the string using the samepointers*/

#include <stdio.h>
int main()
{
	int size = 0, i = 0;
	char str[100], temp;
	printf("enter a string: ");
	gets(str);
    char *start = &str[0], *end =&str[0];
    
    //calculating length
    while(str[i] != '\0')
    {
        size++;
        i++;
        end++;
    }
	printf("\nlength of string: %d", size);
	
	//reversing string
	end--;
	for( i=0 ; i < (size / 2); i++)
	{
	    temp = *start;
	    *start = *end;
	    *end = temp;
	    start++;
	    end--;	    
	}
	printf("\nReversed: %s", str);
}