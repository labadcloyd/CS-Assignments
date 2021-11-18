#include<stdio.h>
int main() {
	/* declaring the variabls */
	int input1, input2, i, sum;

	/* asking for the input */
	printf("Enter digit to start the loop at: ");
	scanf("%d", &input1);
	printf("Enter digit to end the loop at: ");
	scanf("%d", &input2);

	/* basic error handling */
	if (input1 != input2) {

		/* looking for which input is larger */
		if (input1 < input2) {
			/* printing all values in between first and second input */
			printf("\n All numbers in between first and second input: \n");
			for (i = (input1 + 1); i < input2; i++) {
				printf("%d \n", i);
			};
			/* printing all even values in between first and second input */
			printf("\n Even numbers in between first and second input: \n");
			for (i = (input1 + 1); i < input2; i++) {
				if ((i % 2) == 0) {
					sum = sum + i;
					printf("%d \n", i);
				}
			};
		} if (input1 > input2) {
			/* printing all values in between first and second input */
			printf("\n All numbers in between first and second input: \n");
			for (i = (input2 + 1); i < input1; i++) {
				printf("%d \n", i);
			};
			/* printing all even values in between first and second input */
			printf("\n Even numbers in between first and second input: \n");
			for (i = (input2 + 1); i < input1; i++) {
				if ((i % 2) == 0) {
					sum = sum + i;
					printf("%d \n", i);
				}
			};
		}
		/* printing sum of all even numbers */
		printf("\n Sum of all even numbers in between first and second input: %d \n", sum);
	} else {
		printf("Error: digits must not be equal to each other");
	};
	return 0;
}
