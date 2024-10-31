/*5. Write a C program to generate a diamond shape pattern using nested loops. The program
should take the number of rows for the upper half of the diamond as input from the user.
    * 
   * * 
  * * * 
 * * * * 
* * * * * 
 * * * * 
  * * * 
   * * 
    * 
*/

#include <stdio.h>
int main ()
{
    int i, j, spaces, n;
    printf("Enter number of rows: ");
    scanf("%d", &n);
    
    
    for (i=0; i<=n; i++)
    {
        spaces = 5-i ;
        for(j=1; j<=spaces; j++)
        {
            printf (" ");
        }
        for(j=1; j<=i; j++)
        {
            printf("* ");
        }
    printf("\n");
    }
    for (i=n-1; i>0; i--)
    {
        spaces = 5-i ;
        for(j=1; j<=spaces; j++)
        {
            printf (" ");
        }
        for(j=1; j<=i; j++)
        {
            printf("* ");
        }
    printf("\n");
    }
}
