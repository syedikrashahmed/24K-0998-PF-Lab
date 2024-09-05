//QUESTION#3
//A customer asks the IT firm to develop a program in C language, which can take tax rate and salary from the user on runtime and then calculate the tax, the user has to pay and the salary he/she will have after paying the tax. This information is then provided to the user. 

#include <stdio.h>
int main()
{
	float salary, tax, new; 
	printf("Enter salary: ");
	scanf("%f", &salary);
	printf("\nEnter tax: ");
	scanf("%f", &tax);
	new = salary - (salary * (tax / 100));
	printf("salary after paying the tax = %f", new);
	
}