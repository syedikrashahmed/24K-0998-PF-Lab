/*Write a program in C to calculate and print the Electricity bill of a given customer. The customer id., name and unit consumed by the user should be taken from the keyboard and display the total amount to pay to the customer. The charges are as follow:
upto 199 -  16.20
200 - 300 - 20.10
300 _ 500 - 27.10
500 - above - 35.90

If the bill exceeds Rs. 18000 then a surcharge of 15% will be charged on top of the bill.

Expected Output:
Customer ID :1001 
Customer Name: James 
Units Consumed :800
Amount Charges @Rs. 35.90 per unit: 28720 
Surcharge Amount: 4308 
Net Amount Paid by the Customer: 33028.00

 */
 
 #include <stdio.h>
 int main()
 {
     int id, units;
     char name[50];
     float bill, surcharge, finalbill;
     float  perUnit = 0;
    
    printf("Enter Your Name: ");
    scanf("%s", name);
    printf("Enter Your Customer ID: ");
    scanf("%d", &id);
    printf("Enter Your Units Consumed: ");
    scanf("%d", &units);
    
    if (units <= 199)
    {
      perUnit = 16.20;  
    }
    else     if ((units >= 200) && (units < 300))
                {
                      perUnit = 20.10;  
                }
                else if ((units >= 300) && (units < 500))
                        {
                            perUnit = 27.10;
                         }
                         else if (units > 500)
                         {
                              perUnit = 35.90;   
                          }
                          else
                          {
                              printf("insufficient Units");
                          }       
      bill = units * perUnit;
      if (bill > 18000)
      {
           surcharge = bill * 0.15;
           finalbill = bill + surcharge;
      }
      printf("\n Customer ID: %d \n", id);
      printf(" Customer Name: %s \n", name);
      printf(" Units Consumed: %d \n", units);
      printf(" Amount Charges @Rs. %.2f per unit: Rs. %.0f \n", perUnit, bill);
      printf(" Surcharge Amount: Rs. %.0f \n", surcharge);
      printf(" Net Amount Paid by the Customer: Rs. %.2f ", finalbill);
  }

