/*6. Create a function that returns the maximum and minimum element in an integer array. Use thisfunction in the main program to find the maximum and minimum from an array entered by theuser.*/
#include <stdio.h>
void extrema(int arr[], int minmax[2], int n);
int main()
{
	int n;
	printf("Enter number of elements for integer array: ");
	scanf("%d", &n);
	int arr[n], minmax[2] = {9999, -9999}; //minmax[0] stores minimum value, minmax[1] stores maximum value
	for(int i = 0; i < n; i++)
	{
	    printf("enter element %d of array: ", i);
	    scanf("%d", &arr[i]);    
	}
	extrema(arr, minmax, n);
	printf("Minimum in array is %d and Maximum in array is %d", minmax[0], minmax[1]);	
}

void extrema(int arr[], int minmax[2], int n)
{
    for(int i = 0; i < n; i++)
    {
        if(arr[i] < minmax[0])
        {
            minmax[0] = arr[i];
        }
        else if(arr[i] > minmax[1])
        {
            minmax[1] = arr[i];    
        }   
    }
}