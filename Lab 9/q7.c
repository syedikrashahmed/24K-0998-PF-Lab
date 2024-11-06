/*7. Create a Function where it accepts a 2D array of strings where it sorts the string in the arraybased on the first character’s ASCII Value in ascending order.

Example: {HELLO,JELLO,MELLO,TELLO,BELLO} //Input to function

Output from Function: {BELLO,HELLO,JELLO,MELLO,TELLO}

Hint: You can use the strcpy function for this to copy the array.*/
#include <stdio.h>
#include <string.h>
void sort(char arr[][20], int n);
int main()
{
	int n;
	printf("enter num of strings in array: ");
	scanf("%d", &n);
	char list[n][20];
	for(int i = 0; i < n; i++)
	{
	    printf("enter string: ");
	    scanf("%s", list[i]);
	}
	sort(list, n);
	printf("\nSORTED ARRAY\n");
	for(int i = 0; i < n; i++)
	{
	        printf("%s\n", list[i]);
	}
}

void sort(char arr[][20], int n)
{
    char temp[20];
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = 0; j < n - i - 1; j++)
        {
            if(arr[j][0] > arr[j + 1][0])
            {
                strcpy(temp, arr[j]);
                strcpy(arr[j], arr[j + 1]); 
                strcpy(arr[j + 1], temp);
            }
        }    
    } 
}