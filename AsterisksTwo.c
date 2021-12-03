#include<stdio.h>
int main() {
	/* declaring the variables */
	int row, column, columni, num;
	row = 0;
	column: 0;
	columni: 0;

	/* asking for the number */
	printf("Enter Number: ");
	scanf("%i",&num);

	/* Printing the rows */
	while (row <= num) {
		while (column < columni) {
			if (column < (columni-1)) {
				printf("* ");
			}
			if (column == (columni-1)) {
				printf("* \n");
			}
			column++;
		};
		column = 0;
		columni++;
		row++;
	};

	return 0;
}
