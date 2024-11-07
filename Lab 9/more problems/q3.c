/*1. Write a program that takes a destination string and a source string as input. Then, takean integer n as input and append only the first n characters of the source string to thedestination. Print the new concatenated string.*/
#include <stdio.h>
void append(char [], char [], int);
int main()
{
	char source[20], destination[20];
	int n;
	printf("enter orignal string: ");
	scanf("%s", source);
	printf("enter destination string: ");
	scanf("%s", destination);
	printf("enter nunber of elements to append from orignal string to destination string: ");
	scanf("%d", &n);
	append(source, destination, n);
	printf("string after append: %s", destination);
}

void append(char source[], char destination[], int n)
{
    for(int i = 0; i < n; i++)
    {
        destination[i] = source[i];     
    }
}