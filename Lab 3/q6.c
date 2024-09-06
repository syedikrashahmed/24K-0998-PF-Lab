//Question#6
//Construct a C program where you calculate the slope of two point (5,4), (3,2). Use format specifiers to cap the result to 3 decimal places.

#include <stdio.h>
int main()
{
	int x1, x2, y1, y2;
	float slope;
	printf("Enter x-value of first coordinate: ");
	scanf("%d", &x1);
	printf("Enter y-value of first coordinate: ");
	scanf("%d", &y1);
	printf("Enter x-value of second coordinate: ");
	scanf("%d", &x2);
	printf("Enter y-value of second coordinate: ");
	scanf("%d", &y2);
	
	slope = (y2 - y1) / (x2 - x1);
	printf("The slope of the points is %.3f", slope);
	
}