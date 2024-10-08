//6. Make an opposite of the above-mentioned pattern using do-while loop

#include <stdio.h>
int main()
{

        for (int i = 0; i < 6; i++)
        {
                if (i == 0 || i == 5)
                        printf("*   *\n");
                if (i > 0 && i < 5)
                        
                        printf("*****\n");
        }
}