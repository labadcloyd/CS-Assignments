#include<stdio.h>
int main() {
	/* declaring the variabls */
	int input, i;
	i = 1;

	/* asking for the input */
	printf("Enter digit to loop through: ");
	scanf("%d", &input);

	/* basic error handling */
	if (input > 1) {
		/* printing value of i until it's value goes higher than input */
		do {
			printf("Value of i: %d \n", i);
			i++;
		} while (i <= input);
	} else {
		printf("Error: Digit must be greater than 1");
	};

	return 0;
}
