#include<stdio.h>
int main() {
	/* declaring the variables */
	int row, column, num;
	row = 0;
	column: 0;

	/* asking for the number */
	printf("Enter Number: ");
	scanf("%i",&num);

	/* Printing the rows */
	while (row < num) {
		while (column < 5) {
			if (column < 4) {
				printf("* ");
			}
			if (column == 4) {
				printf("* \n");
			}
			column++;
		};
		if (column > 3) {
			column = 0;
		};
		row++;
	};

	return 0;
}
