/*1. Create a program that accepts a 2D array of strings (e.g., 5 words with a max length of 20characters each). Determines if each word (row) is a palindrome. Outputs “Palindrome” or “NotPalindrome” for each word. A palindrome is a word that reads the same forward and backward.
For example: "madam", "racecar", "level", "radar". */
#include <stdio.h>
#include <string.h>
void palindrome(char word[20]);
int main() 
{
	int n;
	printf("enter number of strings in array: ");
	scanf("%d", &n);
	char list[n][20];
	for(int i = 0; i < n; i++)
	{
	       printf("Enter string %d: ", i);
	       scanf("%s", list[i]);
	}
	for(int i = 0; i < n; i++)
	{
	    palindrome(list[i]);    
	}
}

void palindrome(char word[20])
{
        int flag = 1;
        for(int i = 0; i < strlen(word) && flag == 1; i++)
        {
            if(word[i] != word[strlen(word) - i - 1])
            {
                flag = 0;    
            }   
        }
        
        if(flag == 1)
        { printf("%s is Palindrome\n", word);
        }
        else
        {
            printf("%s is not Palindrome\n", word);
        }
}
