//QUESTION#4
//A car travelled back and forth from point A to point B. With a distance being (single trip) 1207KM. During the forward trip fuel price was 118/liter while returning it was 123/liter. Calculate the total fuel cost (both ways) and the fuel consumed (total trip). Use the car’s fuel average as input from the user (Input must be positive make some restrictions on only accepting positive input)

#include <stdio.h>
int main()
{
	int const distance = 1207;
	float fuelAvg, litres, costDist1, costDist2, totalCost, totalFuel;
	printf("Enter fuel average: ");
	scanf("%f", &fuelAvg);
	if (fuelAvg > 0)
		{litres = distance / fuelAvg;
		costDist1 = litres * 118;
		costDist2 = litres * 123;
		totalCost = costDist1 + costDist2;
		totalFuel = litres * 2;
		printf("The total cost is %f and the total fuel consumed is %f", totalCost, totalFuel);}
	else printf("Invalid Fuel Average");
		
	
}