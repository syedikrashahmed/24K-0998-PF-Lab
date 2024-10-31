/*6. Print a pattern using nested loops
    1
   1 1
  1 2 1
 1 3 3 1
1 4 6 4 1*/
#include <stdio.h>
int main()
{
	int n;
	printf("enter nunber of rows: ");
	scanf("%d", &n);
	int spaces = n - 1, p = 0;
	//array storing pascal triangle values
	int pascal[100] = {0, 1, 0}, k = 3;
	for(int i = 2; i <= n; i++)
	{
	    for (int j = 0; j < i; j++)
	    {
	        pascal[k] = pascal[k - i - 1] + pascal[k - i];
	        k++;
	    }
	    pascal[k] = 0;
	    k++;    
	}
	
	for(int i = 0; i < n;  i++)
	{
	    for(int j = 0; j < spaces; j++)
	    {
	        printf(" "); 
	    }
	    spaces--;
	    
	    for(int j = 0; j <= i; j++)
	    {
	        while (pascal[p] == 0)
	        {
	            p++;
	        }
	        printf("%d ", pascal[p]); 
	        p++;  
	    }
	    printf("\n");
	}
}