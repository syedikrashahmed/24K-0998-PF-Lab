/*Task2: The weekday is true if it is a weekday, and the vacation is true if we are on vacation. We sleep in if it is not a weekday or we're on vacation. Print true if we sleep in.
sleepIn(false, false) → true
sleepIn(true, false) → false
sleepIn(false, true) → true*/

#include <stdio.h>
int main()
{
    char weekday, vacation, sleepIn;
    printf("is it a weekday: ");
    scanf("%c", &weekday);
    printf("is it a vacation: ");
    scanf( " %c", &vacation);
    sleepIn = 'n';
    if (weekday == 'n' || vacation == 'y')
    {
         printf("true");
     }
     else 
     {    
         printf("false");
     }  
} 
