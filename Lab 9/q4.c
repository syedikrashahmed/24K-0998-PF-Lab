/*4. Write a C program with a user-defined function calculate to perform basic arithmetic operationssuch as addition, subtraction, multiplication, and division. The program should take two numbersand an operation choice as input, and then use the function to perform the operation.*/
#include <stdio.h>
void arithmetic(int num1, int num2, char symbol);
int main()
{
	int num1, num2;
	char symbol;
	printf("enter arithmetic operator (+, -, /, *): ");
	scanf("%c", &symbol);
	printf("enter number 1: ");
	scanf("%d", &num1);
	printf("enter number 2: ");
	scanf("%d", &num2);
	arithmetic(num1, num2, symbol);
}

void arithmetic(int num1, int num2, char symbol)
{
        int result, flag;
        switch(symbol)
        {
            case '+':
                result = num1 + num2;
            break;
            
            case '-':
                result = num1 - num2;
            break;
            
            case '/':
                result = num1 / num2;
            break;
            
            case '*':
                result = num1* num2;
            break;
            
            default:
            printf("Invalid Operator!"); 
            flag = 0;   
        }
        if(flag != 0)
        {
            printf("%d %c %d = %d", num1, symbol, num2, result);    
        }
}