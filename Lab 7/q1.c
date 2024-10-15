/*1. Create a program that takes an array of size 6 and shifts all its elements to the right by one position. The last element should move to the first position.

Input: {1,2,3,4,5,6}
Output: {6,1,2,3,4,5}*/

#include <stdio.h>
int main()
{
	int arr[6];
	int i, last, num;
	//input array elements 
	for (i = 0; i< 6; i++)
	{
	    printf("enter element %d of array = ", i);
	    scanf("%d", &num);
	    arr[i] = num;
	}
	
	//shifting
	last = arr[5];
	for (i =5; i > 0; i--)
	{
	      arr[i] = arr[i - 1];
	}
	arr[0] = last;
	
	//output array
	for (i = 0; i < 6 ; i++)
	{
	    printf("\n %d", arr[i]);
	}
}