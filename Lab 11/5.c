/*5. Define a structure Date with fields day, month, and year. Create another structure Event
with fields event_name, date (nested Date structure), and location. Write a program to
display all event details in a readable format.*/
#include <stdio.h>

typedef struct
{  
    int day;
    char month[20];
    int year;
}Date;

typedef struct
{  
    char event_name[50];
    Date date;
    char location[50];
}Event;

int main()
{
	Event event;
	printf("Enter Event Name: ");
	scanf("%s", event.event_name);
	printf("Enter Event Location: ");
	scanf("%s", event.location);
	printf("Enter day of Event: ");
	scanf("%d", &event.date.day);
	printf("Enter month of Event: ");
	scanf("%s", event.date.month);
	printf("Enter year of Event: ");
	scanf("%d", &event.date.year);
	printf("\nEvent Details\nEvent Name: %s\nEvent Location: %s\nDate: %d/%s/%d", event.event_name, event.location, event.date.day, event.date.month, event.date.year);
}