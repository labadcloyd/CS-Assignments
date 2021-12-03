#include<stdio.h>

int main()
{
	/* declaring the variables */
    int num, i, j;
    
	/* asking for the number */
    printf("Enter Number: \n");
    scanf("%d", &num);

	/* printing the result */
	i = 1;
	while (i <= num) {
		j = 1;
		while ( j <= num) {
			if (i == 1 || i == num || j == 1 || j == num){
                printf("* ");
            }else{
                printf("  ");
            }
			j++;
		}
        printf("\n");
		i++;
	}

	return 0;
}