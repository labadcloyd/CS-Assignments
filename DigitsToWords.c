#include<stdio.h>

int main(){
	int num;
	printf("Enter number 1 to 9999 only: ");
	scanf("%i",&num);
	/* Defining variables */
	int thousandths, hundredths, tenths, teens, ones;
	if(num > 1 && num < 9999){

		/* printing thousandths numbers */
		switch(num/1000) {
			case 1: printf("one thousand "); break;
			case 2: printf("two thousand "); break;
			case 3: printf("three thousand "); break;
			case 4: printf("four thousand "); break;
			case 5: printf("five thousand "); break;
			case 6: printf("six thousand "); break;
			case 7: printf("seven thousand "); break;
			case 8: printf("eight thousand "); break;
			case 9: printf("nine thousand "); break;
		}

		/* printing hundredths numbers */
		switch((num/100) % 10) {
			case 1: printf("one hundred "); break;
			case 2: printf("two hundred "); break;
			case 3: printf("three hundred "); break;
			case 4: printf("four hundred "); break;		
			case 5: printf("five hundred "); break;
			case 6: printf("six hundred "); break;
			case 7: printf("seven hundred "); break;
			case 8: printf("eight hundred "); break;
			case 9: printf("nine hundred "); break;
		}

		/* printing tenths numbers */
		switch(num % 100) {
			case 11: printf("eleven "); break;
			case 12: printf("twelve "); break;
			case 13: printf("thirteen "); break;
			case 14: printf("fourteen "); break;
			case 15: printf("fifteen "); break;
			case 16: printf("sixteen "); break;
			case 17: printf("seventeen "); break;
			case 18: printf("eighteen "); break;
			case 19: printf("nineteen "); break;
			
			default:
				switch((num/10) % 10){
					case 1: printf("ten "); break;
					case 2: printf("twenty "); break;
					case 3: printf("thirty "); break;
					case 4: printf("forty "); break;
					case 5: printf("fifty "); break;
					case 6: printf("sixty "); break;
					case 7: printf("seventy "); break;
					case 8: printf("eighty "); break;
					case 9: printf("ninety "); break;

					/* printing ones numbers */
					switch(num%10) {
						case 1: printf("one"); break;
						case 2: printf("two"); break;
						case 3: printf("three"); break;
						case 4: printf("four"); break;
						case 5: printf("five"); break;
						case 6: printf("six"); break;
						case 7: printf("seven"); break;
						case 8: printf("eight"); break;
						case 9: printf("nine"); break;
					}
			}
		}
	} else {
		printf("Invalid number.");
	}
	return 0;
}
