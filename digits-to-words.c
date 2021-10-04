#include<stdio.h>

int main(){
	int num;
	
	printf("Enter number 1 to 9999 only: ");
	scanf("%i",&num);
		
	int thousands = num/1000;
	int hundreds = ((num/100) % 10);
	int tenths = ((num/10) % 10);
	int teens = num % 100;
	int ones = num % 10;
	printf("%d", thousands);
	printf("\n %d", hundreds);
	printf("\n %d", tenths);
	printf("\n %d", ones);
	// if(num > 1 && num < 9999){
	// 	printf("Invalid number.");
	// } else{
	// 	if(thousand == 9){
	// 		printf("nine thousand ");
	// 	}
	// 	if(thousand == 8){
	// 		printf("eight thousand ");
	// 	}		
	// 	if(thousand == 7){
	// 		printf("seven thousand ");
	// 	}
	// 	if(thousand == 6){
	// 		printf("six thousand ");
	// 	}
	// 	if(thousand == 5){
	// 		printf("five thousand ");
	// 	}
	// 	if(thousand == 4){
	// 		printf("four thousand ");
	// 	}
	// 	if(thousand == 3){
	// 		printf("three thousand ");
	// 	}
	// 	if(thousand == 2){
	// 		printf("two thousand ");
	// 	}
	// 	if(thousand == 1){
	// 		printf("one thousand ");
	// 	}
		
	// 	//hundreds
	// 	if(hundred == 9){
	// 		printf("nine hundred ");
	// 	}
	// 	if(hundred == 8){
	// 		printf("eight hundred ");
	// 	}
	// 	if(hundred == 7){
	// 		printf("seven hundred ");
	// 	}
	// 	if(hundred == 6){
	// 		printf("six hundred ");
	// 	}
	// 	if(hundred == 5){
	// 		printf("five hundred ");
	// 	}
	// 	if(hundred == 4){
	// 		printf("four hundred ");
	// 	}
	// 	if(hundred == 3){
	// 		printf("three hundred ");
	// 	}
	// 	if(hundred == 2){
	// 		printf("two hundred ");
	// 	}
	// 	if(hundred == 1){
	// 		printf("one hundred ");
	// 	}

	// 	//tens
	// 	if(tens == 11){
	// 		printf("eleven ");
	// 	}
	// 	if(tens == 12){
	// 		printf("twelve ");
	// 	}
	// 	if(tens == 13){
	// 		printf("thirteen ");
	// 	}
	// 	if(tens == 14){
	// 		printf("fourteen ");
	// 	}
	// 	if(tens == 15){
	// 		printf("fifteen ");
	// 	}
	// 	if(tens == 16){
	// 		printf("sixteen ");
	// 	}
	// 	if(tens == 17){
	// 		printf("seventeen ");
	// 	}
	// 	if(tens == 18){
	// 		printf("eighteen ");
	// 	}
	// 	if(tens == 19){
	// 		printf("nineteen ");
	// 	}
	// 	if(tens < 11 || tens> 19)
	// 	{

	// 	
		
	// 	if(ten == 9){
	// 		printf("ninety ");
	// 	}
	// 	if(ten == 8){
	// 		printf("eighty ");
	// 	}
	// 	if(ten == 7){
	// 		printf("seventy ");
	// 	}
	// 	if(ten == 6){
	// 		printf("sixty ");
	// 	}
	// 	if(ten == 5){
	// 		printf("fifty ");
	// 	}
	// 	if(ten == 4){
	// 		printf("forty ");
	// 	}
	// 	if(ten == 3){
	// 		printf("thirty ");
	// 	}
	// 	if(ten == 2){
	// 		printf("twenty ");
	// 	}
	// 	if(ten == 1){
	// 		printf("ten ");
	// 	}
		
	// 	//ones
		
	// 	if(one == 9){
	// 		printf("nine ");
	// 	}
	// 	if(one == 8){
	// 		printf("eight ");
	// 	}
	// 	if(one == 7){
	// 		printf("seven ");
	// 	}
	// 	if(one == 6){
	// 		printf("six ");
	// 	}
	// 	if(one == 5){
	// 		printf("five ");
	// 	}
	// 	if(one == 4){
	// 		printf("four ");
	// 	}
	// 	if(one == 3){
	// 		printf("three ");
	// 	}
	// 	if(one == 2){
	// 		printf("two ");
	// 	}
	// 	if(one == 1){
	// 		printf("one ");
	// 	}
	// }

	// }
	return 0;
}
