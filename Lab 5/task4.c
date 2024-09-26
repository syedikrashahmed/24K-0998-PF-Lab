/*Task4:
Write a nested if statement for the decision diagrammed in the accompanying
flowchart. Use a multiple-alternative if statements for intermediate decisions
where possible.*/

#include <stdio.h>
int main()
{
    int pH;
    printf("enter pH: ");
    scanf("%d", &pH);
    if (pH > 7)
    {
         if (pH < 12)
         {
             printf("Alkaline");
         }
         else
         {
             printf("Very alkaline");
         }          
     }
     else if (pH == 7)
     {
         printf("Neutral");  
     }
     else if (pH > 2)
     {
         printf("Acidic");
     }
     else { printf("Very acidic"); }
}
