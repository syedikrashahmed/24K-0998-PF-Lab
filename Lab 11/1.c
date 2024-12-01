/*1. Write a program to copy the contents of one file to another. (Create a File with some
dummy data, The data is not required to be formatted)*/
#include <stdio.h>
#include <string.h>
int main()
{ 
    char buffer[100];
    FILE *fptr1 = fopen("read.txt", "w");   
    if (fptr1 == NULL)
    {
        printf("Error creating file.\n");
        return 1;
    }
    FILE *fptr2 = fopen("write.txt", "w");
    if (fptr2 == NULL)
    {
        printf("Error creating file.\n");
        return 1;
    }
        fputs("syed ikrash\nahmed", fptr1);
    fclose(fptr1);
    
    fptr1 = fopen("read.txt", "r");   
    if (fptr1 == NULL)
    {
        printf("Error opening file.\n");
        return 1;
    }
    while (fgets(buffer, sizeof(buffer), fptr1))
    {  
            fputs(buffer, fptr2);
    }
    fclose(fptr1);
    fclose(fptr2);
}