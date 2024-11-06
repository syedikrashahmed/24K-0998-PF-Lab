/*5. Create a function that reverses a given string and returns the reversed string. Use this function inthe main program to display the reversed string entered by the user.*/

#include <stdio.h>
#include <string.h>
void reverse(char arr[]);
int main()
{
	char arr[20];
	printf("enter string to reverse: ");
	gets(arr);
	reverse(arr);
}

void reverse(char arr[])
{
       char rev[20];
       for(int i = 0; i < strlen(arr) ; i++)
       {
           rev[strlen(arr) - 1 - i ] =  arr[i];  
       }
       rev[strlen(arr)] = '\0';
       printf("reversed string is %s", rev);
       
}