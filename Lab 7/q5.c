/*5. Write a program to read 10 integers into an array. Then, use loops to find the frequency of each element in the array (how many times each number occurs).*/

#include <stdio.h>
int main()
{
    int arr[10], i,  freq[10]; 
    printf("Enter 10 elements in array\n");

     for (i = 0; i <= 9; i++)
    {
        printf("Element %d = ", i);
        scanf("%d", &arr[i]);
        freq[i] = 1;
    }
    
    for (i = 0; i <=9; i++)
    {
        for (int j = i + 1; j<= 9; j++)
        {
            if ((arr[i] == arr[j])&& (arr[j] != -1))
            {
                freq[i]++;
                freq[j] = -1;
                arr[j] = -1;
           }
        }
    }
    
    for (i =0; i<10; i++)
    {
        if (freq[i] != -1)
        { 
            printf("frequency of %d is %d\n", arr[i], freq[i]);
        } 
    }
    
    
}

