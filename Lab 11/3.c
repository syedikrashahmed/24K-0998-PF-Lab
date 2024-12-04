/*3. Create a function to replace a word in a file with another word.
Read the file into memory, perform a search and replace, and write the modified
content back to the file.*/
#include <stdio.h>
#include <string.h>
void replace(char find[], char change[]);
int main()
{
	FILE *fptr;
	fptr = fopen("orignal.txt", "r");
	if (fptr == NULL)
	{
	    printf("error in opening file!");
	    return 0; 
	}
	char find[100], change[100], buffer[100];
	printf("enter word to find in file: ");
	scanf("%s", find);
	int found = 0;
	while (fscanf(fptr, "%s", buffer) != EOF)
	{ 
	    if (strcmp(buffer, find) == 0)
	    {    
	        found = 1;
		}
	}
	fclose(fptr);
	if (found == 1)
    {
        printf("enter word to change to in file: ");
	    scanf("%s", change);
        replace(find, change);
	}
	else
	{
	    printf("Word not found in text file");
     }
}

void replace(char find[], char change[])
{   
    FILE *fptr1, *fptr2;
    char buffer[100];
    fptr1 = fopen("orignal.txt", "r");
    fptr2 = fopen("changed.txt", "w");
	if (fptr1 == NULL || fptr2 == NULL)
	{
	    printf("error in opening file!");
	    return; 
	}
	while (fscanf(fptr1, "%s", buffer) != EOF)
	{
	    if (strcmp(buffer, find) == 0)
	    {    
	        fprintf(fptr2, "%s ", change);
	        continue;
		}
		fprintf(fptr2, "%s ", buffer);
		
		int c = fgetc(fptr1);
        if (c == '\n') {
            fputc('\n', fptr2);
        } else {
            ungetc(c, fptr1);
        }
	}
	fclose(fptr1);
	fclose(fptr2);
}  