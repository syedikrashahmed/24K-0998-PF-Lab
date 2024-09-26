/*Task3: Write a program to control a coffee machine. Allow the user to input the type of coffee as B for Black and W for White. Ask the user if the cup size is double and if the coffee is manual. The following table details the time chart for the machine for each coffee type. Display a statement for each step. If the coffee size is double, increase the baking time by 50 percent. Use functions to display instructions to the user and to compute the coffee time.*/

#include <stdio.h>
int main()
{
	int time = 0;
	char type, isdouble, manual;
	printf("Enter type of coffee (B for black & W for white): ");
	scanf("%c", &type);
	printf("is cup size double (y for yes & n for no): ");
	scanf(" %c", &isdouble);
	printf("is coffee manual (y for yes & n for no): ");
	scanf(" %c", &manual);

	switch(type)
	{
	case 'w':
	case 'W':
		printf("Step 1: Put Water (15 mins)\n");
		time = time + 15;
		printf("Step 2: Add Sugar (15 mins)\n");
		time = time + 15;
		if (manual == 'y' || manual == 'Y')
			{ printf("Step 3: Mix Well (20 mins)\n");
			  time = time + 20; }		
		printf("Step 4: Add Coffee (2 mins)\n");
		time = time + 2;
		printf("Step 5: Add Milk (4 mins)\n");
		time = time + 4;
		if (manual == 'y' || manual == 'Y')
			{ printf("Step 6: Mix Well (20 mins)\n");
			  time = time + 20; }	
	break;
	case 'b':
	case 'B':
		printf("Step 1: Put Water (20 mins)\n");
		time = time + 20;
		printf("Step 2: Add Sugar (20 mins)\n");
		time = time + 20;
		if (manual == 'y' || manual == 'Y')
			{ printf("Step 3: Mix Well (25 mins)\n");
			  time = time + 25; }		
		printf("Step 4: Add Coffee (15 mins)\n");
		time = time + 15;
		if (manual == 'y' || manual == 'Y')
			{ printf("Step 5: Mix Well (25 mins)\n");
			  time = time + 25; }	
	break;

	default:
	printf("Invalid coffee type!");
	}

	if (isdouble == 'y' || isdouble == 'Y')
		{ time = time + (time / 2); }
	
	printf("Total time taken: %d minutes", time);	
}