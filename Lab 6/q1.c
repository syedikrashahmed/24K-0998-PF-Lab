//1. Which loop system would be better for user input. Justify your answer by creating a  program that

// while loop
//e.g:
#include <stdio.h>
int main()
{
        int userinput, sum = 0;
        printf("enter num: ");
        scanf("%d", &userinput);
        sum = sum + userinput;
        printf("%d\n", sum);
        while(userinput != 0)
        {
                printf("enter num: ");
                scanf("%d", &userinput);
                sum = sum + userinput;
                printf("%d\n", sum);
        }
}