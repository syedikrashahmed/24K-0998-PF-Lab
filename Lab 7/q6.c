/*6. Given an array arr[] of size N which contains elements from 0 to N-1, you need to findone of the elements occurring more than once in the given array.

Input:
Array Size =5
Element 1=1
Element 2=2
Element 3=3
Element 4=2
Element 5=5

Output:
Number 2 occur more than once.

Note: You cannot utilize nested loops.*/

#include <stdio.h>
int main()
{
	int n, i, num = -1;
	printf("enter size of array: ");
	scanf("%d", &n);
	printf("Size of array: %d", n);
	int arr[n];
	int freq[n];
	// input of array
	for( i=0; i < n; i++)
	{
	    printf("\nenter element %d: ", i);
	    scanf("%d", &arr[i]);
	    freq[i] = 0;
	}
	
	for(i=0 ; i < n; i++)
	{
	    freq[arr[i]] += 1;
	    if (freq[arr[i]] > 1)
	    {
	        num = arr[i];
	        break;
	    }
	}
	if (num == -1)
	{ printf("\nNo number occurs more than once"); }
	else
	{ printf("\nNumber %d occurs more than once", num); }
}