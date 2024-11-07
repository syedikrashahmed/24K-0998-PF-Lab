/*1. Write a program that initializes a 2D character array with a list of words. Then, take aword as input from the user and check if it exists in the array. Display "Found" if it’s
there, otherwise display "Not Found".*/
#include <stdio.h>
#include <string.h>
void check(char list[10][10], char[]);
int main(int argc, char *argv[])
{
	char userin[10];
	char list[10][10] = {"hello", "bello", "idk", "what", "to", "write", "in", "this", "babar", "azam"};   
	printf("enter a word that might be in the list: ");
	scanf("%s", userin);
	check(list, userin);
}

void check(char list[10][10], char userin[])
{
       int flag = 0;
       for(int i = 0; i < 10; i++)
       {
           if(strcmp(list[i], userin) == 0)
           {
               flag = 1;
               break;   
           }
       }
       
       if(flag == 1)
       {
           printf("Found");
       }
       else if(flag ==0)
       {
           printf("Not Found");     
       }
}