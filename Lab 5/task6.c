/*TASK 6: x = 5 > 8? 10: 1!= 2 < 5? 20 : 30
the output is 30 because the expression is evaluated in the following order:
5 is not greater than 8, so else statement of the first ternary operator will be used, so x = 1!= 2 < 5? 20 : 30 is evaluated
as 2 is less than 5, so expression becomes  x = 1 != 1? 20 : 30
as the statement 1 != 1 is false, so else statement of the second ternary operator will be used, x is assigned the value 30
therefore the output is 30*/
