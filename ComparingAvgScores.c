#include<stdio.h>
int main() {
	/* declaring the variabls */
	int num1, num2, num3, num4, num5, num6, total1, total2, firstAvg, secondAvg;

	/* asking for the input */
	printf("Enter 1st student's first score: ");
	scanf("%d", &num1);
	printf("second score: ");
	scanf("%d", &num2);
	printf("third score: ");
	scanf("%d", &num3);
	
	printf("\nEnter 2nd student's first score: ");
	scanf("%d", &num4);
	printf("second score: ");
	scanf("%d", &num5);
	printf("third score: ");
	scanf("%d", &num6);
	
	/* getting sum of both students scores */
	total1 = num1 + num2 + num3;
	total2 = num4 + num5 + num6;
	/* calculating the average scores */
	firstAvg = total1 / 3;
	secondAvg = total2 / 3;
	
	/* disaplying the results */
	printf("\nThe 1st student had an average score of %d, while the 2nd student had an average score of %d.", firstAvg, secondAvg);
	
	if (firstAvg > secondAvg) {
		printf("\nThe 1st student has a higher average score than the 2nd student");
	}else if (firstAvg < secondAvg){
		printf("\nThe 2nd student has a higher average score than the 1st student");
	}else if (firstAvg == secondAvg){
		printf("\nBoth of the students have an equal average score of %d", firstAvg);
	};
	return 0;
}
