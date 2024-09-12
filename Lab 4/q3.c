//Create a calculator asking for operator (+ or – or * or /) and operands and performs calculation according to the user input using switch statement.

#include <stdio.h>
int main()
{
	int operand1, operand2;
	char operator;
	printf("Enter Number 1: ");
	scanf("%d", &operand1);
	printf("Enter Number 2: ");
	scanf("%d", &operand2);
	printf("Enter operator: ");
	scanf(" %c", &operator);
	switch(operator)
	{
	case '+': printf("%d", operand1+operand2);
		break;
	case '-': printf("%d", operand1-operand2);
		break;
	case '*': printf("%d", operand1*operand2);
		break;
	case '/': printf("%d", operand1/operand2);
		break;
	default: printf("Invalid operator");
		break;
	}
}

