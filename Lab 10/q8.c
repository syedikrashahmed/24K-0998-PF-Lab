/*Write a recursive function linearSearch that takes an array, its size, the target element to search for, and the current index. It checks if the target is at the current index and continues searching in the subsequent indices until it either finds the target or exhausts the array.*/
#include <stdio.h>
void recurrLinearSearch(int arr[], int n, int target, int index);

int main()
{
	int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int target;
	printf("enter number to search: ");
	scanf("%d", &target);
	recurrLinearSearch(arr, 10, target, 0);
}

void recurrLinearSearch(int arr[], int n, int target, int index)
{   
    if (index == n)
    {
        printf("Array exhausted! target not found");  
        return;
    }
    else if (arr[index] == target)
    {  
        printf("Target Found!");
        return;
    }
    recurrLinearSearch(arr, n, target, index + 1);
     
}