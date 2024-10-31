/*4. Write a C program to multiply two matrices of size 3x3 and display the result matrix. Also subtract the resultant matrix from Matrix A as well.*/ 

#include <stdio.h>
int main()
{
    int matrix1[3][3], matrix2[3][3], matrix3[3][3], i, j, num, r3, c3;
    //input of matrix 1
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("enter element for matrix 1: ");
            scanf("%d", &num);
            matrix1[i][j] = num;
        }
    }
    printf("\n");
    //input of matrix 2
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("enter element for matrix 2: ");
            scanf("%d", &num);
            matrix2[i][j] = num;
        }
    }
    r3 = 0;
    for (i = 0; i < 3; i++)
    {
        c3 = 0;
        for (j = 0; j < 3; j++)
        {
            matrix3[r3][c3] = (matrix1[i][0] * matrix2[0][j]) + (matrix1[i][1] * matrix2[1][j]) + (matrix1[i][2] * matrix2[2][j]) ;
            
            c3++;
        }
        r3++;
    }
    printf("\nAfter multiplication\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%d ", matrix3[i][j]);
        }
        printf("\n");
    }
    
    printf("\nAfter subtract\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            matrix1[i][j] = matrix3[i][j] - matrix1[i][j];
            printf("%d ", matrix1[i][j]);
        }
        printf("\n");
    }
}
