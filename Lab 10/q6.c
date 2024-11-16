/*6. Design a structure to store information about travel packages, including package name, destination, duration, cost, and number of  seats available. Write a program that allows users to book a travel package and display available packages.*/
#include <stdio.h>
#include <string.h>
struct package
{
    char name[20];
    char destination[20];
    int duration;
    float cost;
    int available;        
};

void book(package options[], int n);
void displayAll(package options[], int n);

int main()
{
    int n, choice; 
    printf("how many packages to enter: ");
    scanf("%d", &n);
    package options[n];
    printf("\nEnter Package Details");
    for (int i = 0; i < n; i++)
    {
          printf("Name: ");
          scanf("%s", options[i].name);
          printf("Destination: ");
          scanf("%s", options[i].destination);
          printf("Duration: ");
          scanf("%d", &options[i].duration);
          printf("Cost: ");
          scanf("%f", &options[i].cost);
          printf("Available: ");
          scanf("%d", &options[i].available);
          printf("\n");
    }
    
    while(1)
    {   
           printf("choose 1 to book, 2 to display information of all, 3 to exit: ");
           scanf("%d", &choice);
           if (choice == 1)
           {
               book(options, n);    
           }
           else if (choice == 2)
           {    
               displayAll(options, n);   
           }
           else
           {
               break;   
           }
    }          
}

void book(package options[], int n)
{
    char toBook[100];
    printf("enter name of package to book: ");
    scanf("%s", toBook);
    int flag = 0;
    printf("\nBooking a Package: \n");
    for (int i = 0; i < n ; i++)
    {
        if (strcmp(options[i].name, toBook) == 0)
        {
            flag = 1;
            printf("Booked!\n");
            options[i].available--;
            break;     
        }    
    }
    
    if (flag == 0)
    {
        printf("Invalid Name Of Package!\n");    
    }
        
}

void displayAll(package options[], int n)
{
    printf("\nDisplaying All Available Packages:\n");
    for (int i = 0; i < n; i++)
    {
        if (options[i].available > 0)
            printf("%d) Package Name: %s\n Destination: %s, Duration: %d mins\n Cost: %.2f\n", i + 1, options[i].name, options[i].destination, options[i].duration, options[i].cost);         
    }        
}