#include <stdio.h>
int main()
{
	int userinput, sum = 0;
	printf("enter num: ");
	scanf("%d", &userinput);
	sum = sum + userinput;
	printf("%d\n", sum);
	while(userinput != 0)
	{
		printf("enter num: ");
		scanf("%d", &userinput);
		sum = sum + userinput;
		printf("%d\n", sum);
	}
}
