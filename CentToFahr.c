#include<stdio.h>

int main()
{
	float cel;
	/* asking for the number to be converted to fahrenheit */
	printf("Number to convert from Celsius to Fahrenheit: ");
	scanf("%f",&cel);
	
	/* Computing the given number */
	float fahren;
	fahren = ((9.0/5.0)* (cel)) + 32.0;
	
	/* Printing out the results */
	printf("Conversion from Celsius to Fahrenheit: %.1f",fahren);

	return 0;
	
};
