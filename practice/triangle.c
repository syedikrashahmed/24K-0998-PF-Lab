#include <stdio.h>
int main()
{
    int i, j;
    for (int  i = 0; i <5 ; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("X ");
        }
        printf("\n");
    }

    for (int  i = 4; i >=0 ; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("X ");
        }
        printf("\n");
    }
}
