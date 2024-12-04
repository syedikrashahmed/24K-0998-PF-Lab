/*2. How would you implement a program to count the occurrences of each word in a text
file? Write the approach and code.*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct
{
    char word[100];
    int count;   
}WordCount;

int main()
{
    FILE *fptr;
    char buffer[100];
    int arrsize = 1;
    WordCount* arr = (WordCount*)malloc(1*sizeof(WordCount));
    fptr = fopen("things.txt", "r");
    if (fptr == NULL)
    {  
        printf("Error in opening file");
        return 0; 
    }
    while (fscanf(fptr, "%s", buffer) != EOF)
    {  
        int found = 0;
        for (int i = 0; i < arrsize; i++)
        {  
            if (strcmp(buffer, arr[i].word) == 0)
            {   
                arr[i].count++;
                found = 1;
                break;
            }
        }
        
        if (found == 0)
            {
                arrsize++;  
                arr = realloc(arr, arrsize*sizeof(WordCount)); 
                strcpy(arr[arrsize - 1].word, buffer);
                arr[arrsize - 1].count = 1; 
            } 
    }
    fclose(fptr);
    
    for (int i = 0; i < arrsize; i++)
    {   
        printf("%d) %s: %d\n", i + 1, arr[i].word, arr[i].count); 
    }
    free(arr);    
}