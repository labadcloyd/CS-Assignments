#include<stdio.h>

int main()
{
	float fahren;
	/* asking for the number to be converted to fahrenheit */
	printf("Number to convert from Fahrenheit to Celsius: ");
	scanf("%f",&fahren);
	
	/* Computing the given number */
	float cel;
	cel = 5.0/9.0 * (fahren-32);
	
	/* Printing out the results */
	printf("Conversion from Fahrenheit to Celsius : %.1f",cel);

	return 0;
	
};


// main()
// {
// 	float Fahren;
	
// 	printf("Input temperature in degree Fahren: ");
// 	scanf("%f",&Fahren);
	
// 	//Computation
	
// 	float Cel;
// 	Cel = 5.0/9.0 * (Fahren-32);
	
// 	//Results:
	
// 	printf("Conversion from Fahrenheit to Celsius: %.1f",Cel);
	
// }
