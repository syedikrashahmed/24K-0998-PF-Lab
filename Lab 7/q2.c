/*2. Write a program that takes a string as input from the user and counts the frequency of each vowel (A, E, I, O, U) in the string

Input: Hello World
Output: a=0, e=1, I=0, o=2, u= 0*/ 

#include <stdio.h>
int main()
{
	char str[25];
	int a = 0, e=0, i=0, o=0, u= 0, index = 0, length;
	printf("enter string= ");
	gets (str);
	while(str[index] != '\0')
	{
	    switch(str[index])
	    {case 'a':
	    case 'A': a++;
	    break;
	    
	    case 'e':
	    case 'E': e++;
	    break;
	    
	    case 'i':
	    case 'I': i++;
	    break;
	    
	    case 'o':
	    case 'O': o++;
	    break;
	    
	    case 'u':
	    case 'U': u++;
	    break;}
	    index++;
	}
	 printf("\n a= %d, e= %d, i= %d, o= %d, u= %d", a, e, i, o, u);
}