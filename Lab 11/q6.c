/*6. Define a structure Employee with fields name, id, salary, and a nested structure Address
#include <stdio.h>
#include <string.h>

typedef struct
{
    char city[50];
    int zip_code;
}Address;

typedef struct
{
    char name[50];
    int id;
    float salary;
    Address address;
}Employee;

int main()
{
    Employee employees[3];
    for(int i = 0; i<3; i++)
    {
        printf("\nEMPLOYEE %d INPUTS\n", i + 1);

        printf("Enter Name: ");
        getchar();
        gets(employees[i].name);

        printf("Enter ID: ");
        scanf("%d", &employees[i].id);

        printf("Enter Salary: ");
        scanf("%f", &employees[i].salary);

        printf("Enter City: ");
        getchar();
        gets(employees[i].address.city);

        printf("Enter Zip Code: ");
        scanf("%d", &employees[i].address.zipcode);
    }
    
    FILE* fptr=fopen("employee.txt", "w");
    if (fptr == NULL) 
    {
        printf("File not found");
        return 0;
    }
    for(int i= 0; i<3; i++)
    {
         fwrite(employees, sizeof(Employee), 1, fptr);
    }   
    fclose(fptr);
}