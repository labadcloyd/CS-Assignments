#include<stdio.h>

int main(){
	int num;
	
	printf("Enter number 1 to 9999 only: ");
	scanf("%i",&num);
	/* getting the thousandth number */
	int thousandths = num/1000;
	/* getting the hundredth number */
	int hundredths = ((num/100) % 10);
	/* checking if number is in the teens range */
	int tenths = ((num/10) % 10);
	/* getting the tenth number */
	int teens = num % 100;
	/* getting the first digit number */
	int ones = num % 10;
	if(num > 1 && num < 9999){

		/* printing thousandths numbers */
		if(thousandths == 9){
			printf("nine thousand ");
		}
		if(thousandths == 8){
			printf("eight thousand ");
		}		
		if(thousandths == 7){
			printf("seven thousand ");
		}
		if(thousandths == 6){
			printf("six thousand ");
		}
		if(thousandths == 5){
			printf("five thousand ");
		}
		if(thousandths == 4){
			printf("four thousand ");
		}
		if(thousandths == 3){
			printf("three thousand ");
		}
		if(thousandths == 2){
			printf("two thousand ");
		}
		if(thousandths == 1){
			printf("one thousand ");
		}
		
		/* printing hundredths numbers */
		if(hundredths == 9){
			printf("nine hundred ");
		}
		if(hundredths == 8){
			printf("eight hundred ");
		}
		if(hundredths == 7){
			printf("seven hundred ");
		}
		if(hundredths == 6){
			printf("six hundred ");
		}
		if(hundredths == 5){
			printf("five hundred ");
		}
		if(hundredths == 4){
			printf("four hundred ");
		}
		if(hundredths == 3){
			printf("three hundred ");
		}
		if(hundredths == 2){
			printf("two hundred ");
		}
		if(hundredths == 1){
			printf("one hundred ");
		}

		/* printing tenths numbers */
		if(teens == 11){
			printf("eleven ");
		}
		if(teens == 12){
			printf("twelve ");
		}
		if(teens == 13){
			printf("thirteen ");
		}
		if(teens == 14){
			printf("fourteen ");
		}
		if(teens == 15){
			printf("fifteen ");
		}
		if(teens == 16){
			printf("sixteen ");
		}
		if(teens == 17){
			printf("seventeen ");
		}
		if(teens == 18){
			printf("eighteen ");
		}
		if(teens == 19){
			printf("nineteen ");
		}
		if(teens < 11 || teens > 19){
			/* from 11-19 range */
			if(tenths == 9){
				printf("ninety ");
			}
			if(tenths == 8){
				printf("eighty ");
			}
			if(tenths == 7){
				printf("seventy ");
			}
			if(tenths == 6){
				printf("sixty ");
			}
			if(tenths == 5){
				printf("fifty ");
			}
			if(tenths == 4){
				printf("forty ");
			}
			if(tenths == 3){
				printf("thirty ");
			}
			if(tenths == 2){
				printf("twenty ");
			}
			if(tenths == 1){
				printf("ten ");
			}
			
			/* printing ones */
			
			if(ones == 9){
				printf("nine ");
			}
			if(ones == 8){
				printf("eight ");
			}
			if(ones == 7){
				printf("seven ");
			}
			if(ones == 6){
				printf("six ");
			}
			if(ones == 5){
				printf("five ");
			}
			if(ones == 4){
				printf("four ");
			}
			if(ones == 3){
				printf("three ");
			}
			if(ones == 2){
				printf("two ");
			}
			if(ones == 1){
				printf("one ");
			}
		}
	
	} else{
		printf("Invalid number.");
	}
	return 0;
}
