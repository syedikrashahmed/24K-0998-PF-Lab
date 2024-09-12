//Write a C program to input a character from the user and check whether the given character is a small alphabet, capital alphabet, digit, or special character, using if else.

#include <stdio.h>
int main()
{
	char inp;
	printf("Input pls: ");
	scanf("%c", &inp);
	if (inp >= 'a' && inp <= 'z')
		{ printf("small letter"); }
	else  if (inp >= 'A' && inp <= 'Z')
		  { printf("capital letter"); }
	else if (inp >= '0' && inp <= '9')
		  { printf("digit"); }
	else 
		  { printf("special"); }
}