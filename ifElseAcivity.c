#include<stdio.h>

int main()
{
	
	/* ------- inputs and choices ------- */
	/* common vars */
	int n1,n2,choice,sum, diff,prod,quot;
	/* asking for input */
	printf("Enter first integer: ");
	scanf("%d", &n1);
	printf("Enter second integer: ");
	scanf("%d", &n2);
	/*menu*/
	printf("MENU\n");
	printf("1. Addition\n");
	printf("2. Subtraction\n");
	printf("3. Multiplication\n");
	printf("4. Division\n");
	printf("Enter choice: ");
	scanf("%d", &choice);

	/* ------- conditionally processing and displaying data ------- */
	/* processing and displaying SUM */
	if (choice == 1){
		sum = n1 + n2;
		printf("The sum of %d and %d is %d\n",n1,n2,sum);
	};
	/* processing and displaying DIFFERENCE */
	if (choice == 2){
			if(n1<n2){
				diff = n2 - n1;
			}else{
			 	diff = n1 - n2;
			}
		printf("The difference of %d and %d is %d\n",n1,n2, diff);
	};
	/* processing and displaying PRODUCT */
	if (choice == 3){
		prod = n1 * n2;
		printf("The product of %d and %d is %d\n",n1,n2,prod);
	};
	/* processing and displaying QUOTIENT */
	if (choice == 4){
		if(n1<n2){
			quot = n2 / n1;
		}else{
			quot = n1 / n2;
		}
		printf("The quotient of %d and %d is %d\n",n1,n2, quot);
	};
	return 0;
};
