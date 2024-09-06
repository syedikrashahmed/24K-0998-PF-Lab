//QUESTION#5
//Construct a C program with the flowchart below. The input value of the principle must be between 100 Rs. To 1,000,000 Rs. The Rate of interest must be between 5% to 10% and Time Period must be between 1 to 10 years. Hint: these restrictions can be displayed in the form of message on the window.

#include <stdio.h>
int main()
{
	float P, R, interest;
	int T;
	printf("Enter Principle: ");
	scanf("%f", &P);
	printf("Enter Rate: ");
	scanf("%f", &R);
	printf("Enter Time Period: ");
	scanf("%d", &P);
	if ((P >= 100) && (P <= 1000000) && (R >= 5) && (R <= 10) && (T >= 1) && (T <= 10))
	{
		interest = (P * R * T) / 100;		
		printf("The Interest is %f", interest);
		
	}
	else printf("Invalid Input");
}