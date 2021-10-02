#include<stdio.h>

int main()
{
	/* creating variables for storing the input */
	int num1, num2;
	/* asking for their input */
	printf("First Integer: ");
	scanf("%i",&num1);
	printf("Second Integer: ");
	scanf("%i",&num2);

	/* creating variables for storing the computation */
	int sum, difference,product,quotient,remainder;
	/* processing the computation */
	sum = num1 + num2;
	difference = num1 - num2;
	product = num1 * num2;
	quotient = num1/num2;
	remainder = num1 % num2;

	/* displaying the results of the computations */
	printf("Results:\n");
	printf("Sum: %i\n",sum);
	printf("Difference: %i\n",difference);
	printf("Product: %i\n",product);
	printf("Quotient: %i\n",quotient);
	printf("Remainder: %i\n",remainder);

	return 0;
}	
