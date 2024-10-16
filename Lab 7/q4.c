/*4. Write a program which identifies if a given string is a palindrome using arrays.
*/

#include <stdio.h>
int main()
{
	char userArray[25];
	int i = 0, flag = 0, size = 0;
	// array input
	printf("Enter a palindrome: ");
	gets(userArray);
	
	//size of array
	while(userArray[i] != '\0')
	{
	    size = size + 1;
	    i++;
	}
	
	//checking palindrome
	for(i =0; i < size; i++)
	{
	    if (userArray[i] == userArray[size - i - 1])
	    {
	        flag = 1;
	    }
	    else
	    {
	        flag = 0;
	        break;
	    }
	}
	if(flag == 1)
	{ printf("Is Palindrome"); }
	else
	{ printf("Is Not Palindrome"); }
}