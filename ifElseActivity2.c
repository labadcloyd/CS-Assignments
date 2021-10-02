#include<stdio.h>

int main()
{
	
	/* ------- inputs and choices ------- */
	/* common vars */
	int radius, choice;
	float area, circumference, diameter, pi=3.14;
	/* asking for input */
	printf("Enter Radius of the Circle: ");
	scanf("%d", &radius);
	/*menu*/
	printf("\n Get the: \n");
	printf("1. Area of the Circle \n");
	printf("2. Circumference of the Circle \n");
	printf("3. Diameter of the Circle \n");
	printf("Enter choice: ");
	scanf("%d", &choice);

	/* processing data */
	area = pi * (radius * radius);
	circumference = 2 * pi * radius;
	diameter = 2 * radius;

	/* ------- conditionally processing and displaying data ------- */
	/* displaying area */
	if (choice == 1){
		printf("The area of the circle is %f\n", area);
	};
	/* displaying circumference */
	if (choice == 2){
		printf("The circumference of the circle is %f\n", circumference);
	};
	/* displaying diameter */
	if (choice == 3){
		printf("The diameter of the circle is %f\n", diameter);
	};
	return 0;
};
