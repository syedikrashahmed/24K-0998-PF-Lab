/*3. Write a C program to find the saddle point(s) in each 3x3 matrix. A saddle point is an element
that is the smallest in its row and the largest in its column*/

#include <stdio.h>
int main()
{
	int matrix[3][3], saddle, min, max, srow, scol;
	
	//input of 3 x 3 matrix
	for(int i = 0; i < 3; i++)
	{
	    for(int j = 0; j < 3; j++)
	    {
	        printf("enter elements of matrix: ");
	        scanf("%d", &matrix[i][j]);  
	    }
	}
	
	saddle = 0;
	for(int i = 0; i < 3; i++) 
	{
	    min = 9999;
	    for (int j = 0; j < 3; j++) 
	    {
	        if (matrix[i][j] < min)
	        {
	            min = matrix[i][j];
	            scol = j;
	        }}
	        max = -9999;
	        for (int k = 0; k < 3; k++) 
	            {
	                   if (matrix[k][scol] > max)
	                   {
	                       max = matrix[k][scol];
	                       srow = k;
	                   }
	            }
	            if (max == min) 
	            {
	                saddle = 1;
	                printf("\nsaddle point is %d, and it is at row %d and column %d\n", max, srow, scol);
	            }
	    
	}
	
	if(saddle == 0)
	{
	    printf("there are no saddle points in this");
	}
}