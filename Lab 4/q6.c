//An online shopping store is providing discounts on the items due to the Eid. If the cost of items is less than 2000 it will give a discount up to 5%. If the cost of shopping is 2000 to 4000, a 10% discount will be applied. If the cost of shopping is 4000 to 6000, a 20% discount will be applied. If it's more than 6000 then a 35% discount will be applied to the cost of shopping. Print the actual amount, saved amount and the amount after discount. The Minimum amount eligible for a discount is 500.

#include <stdio.h>
int main()
{
	int cost;
	float saved, new;
	printf("Enter cost: ");
	scanf("%d", &cost);
	
	if (cost < 2000 && cost >= 500)
	{ new = cost * 0.95;
	  saved = cost - new;
 	  printf("Discount price is %.2f and Amount saved is %.2f", new, saved); }
	else if (cost >= 2000 && cost < 4000)
	{ new = cost * 0.9;
	  saved = cost - new;
	  printf("Discount price is %.2f and Amount saved is %.2f", new, saved); }
	else if (cost >= 4000 && cost < 6000)
	{ new = cost * 0.8;
	  saved = cost - new;
	  printf("Discount price is %.2f and Amount saved is %.2f", new, saved);	}
	else if (cost >= 6000)
	{ new = cost * 0.65;
	  saved = cost - new; }	
	else { printf("cost is less than 500 so no discount"); }
	

}