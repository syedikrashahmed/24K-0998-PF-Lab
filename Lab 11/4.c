/*4. Create a program that defines a structure Student with fields roll_no, name, and another nested structure Marks (fields: maths, science, and english). Use an array of Student to store data for 5 students and calculate the average marks for each student.*/
#include <stdio.h>

typedef struct
{  
    int maths;
    int science;
    int english;
}Marks;

typedef struct
{  
    char roll_no[8];
    char name[50];
    Marks marks;
}Student;

int main()
{
	Student arr[5];
	for (int i = 0; i < 5; i++)
	{   
	    printf("\nFor student %d\nenter Roll number: ", i + 1);
	    scanf("%s", arr[i].roll_no);
	    printf("enter Name: ");
	    scanf("%s", arr[i].name);
	    printf("enter Marks for Maths: ");
	    scanf("%d", &arr[i].marks.maths);
	    printf("enter Marks for Science: ");
	    scanf("%d", &arr[i].marks.science);
	    printf("enter Marks for English: ");
	    scanf("%d", &arr[i].marks.english);
        int total = arr[i].marks.maths + arr[i].marks.science + arr[i].marks.english;
        printf("Average of %s is %.2f\n", arr[i].name, total/3.0); 
        
	}
}