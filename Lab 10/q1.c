/*1. Write a recursive function that takes an array and its size as input and prints all the elements.*/


#include <stdio.h>
void recurPrint(int i, int arr[]);


int main()
{
    int size;
    printf("enter size of array: ");
    scanf("%d", &size);
    int arr[size];
    for (int i = 0; i<size ; i++)
    {
        printf("Enter element %d: ", i);
        scanf("%d", &arr[i]);
    }
    recurPrint(size - 1, arr);
}


void recurPrint(int i, int arr[])
{
    if (i == 0)
    {
        printf("%d\n", arr[i]);
    }
    else
    {
        recurPrint(i - 1, arr);
        printf("%d\n", arr[i]);
    }
}
