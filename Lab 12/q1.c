/*Task 1: Write a program that calculates the sum of all the elements in array using pointers(Note: Generate the array via user)*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int num, sum = 0;
	printf("Enter number of elements to sum in array: ");
	scanf("%d", &num);
	int *arr = (int*)malloc(num * sizeof(int));
	for (int i = 0; i < num; i++)
	{
	    printf("Enter Element %d: ", i);    
	    scanf("%d", &arr[i]);
	    sum = sum + arr[i];
	}
	printf("Sum of elements is %d", sum);
	free(arr);
}