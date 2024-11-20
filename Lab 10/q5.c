/*5. Write a recursive function bubbleSort that takes an array and its size. It performs the bubble sort algorithm by repeatedly comparing adjacent elements and swapping them if they are in the wrong order.*/
#include <stdio.h>
void recurrBubbleSort(int arr[], int n);
int main()
{
	int arr[100], n;
	printf("Enter size of array: ");
	scanf("%d", &n);
	printf("Enter array elements: \n");
	for (int i = 0; i < n; i++)
	{
	    printf("Enter element: "); scanf("%d", &arr[i]);    
	}
	recurrBubbleSort(arr, n);
	printf("\narray after sort:\n");
	for (int i = 0; i < n; i++)
	{   
	    printf("%d\n", arr[i]);   
	}
}

void recurrBubbleSort(int arr[], int n)
{
    if (n ==1)
    {
         return;
    }      
    else
    {
        for (int i = 0; i < n - 1; i++)
        { 
            if (arr[i] > arr[i + 1]) 
            {   
                 int temp = arr[i];
                 arr[i] = arr[i + 1];
                 arr[i + 1] = temp;
            }  
        }        
    }
    
    recurrBubbleSort(arr, n - 1);
}