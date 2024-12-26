#include<stdio.h>
#include<stdbool.h>
int main(){
	int num1, num2;
	bool isLessThanOrEqual;
	printf("Enter the first number: ");
	scanf("%d", &num1);
	printf("Enter the second number: ");
	scanf("%d", &num2);
	isLessThanOrEqual = (num1 <= num2);
	printf("Is the first number less than or equal to the second?(using bool); %s\n", isLessThanOrEqual ? "true" : "false");
	printf("Is the first number less than or equal to the second? (as integer): %d\n", isLessThanOrEqual);
	if (num1 <= num2){
		printf("The first number is less than or equal to the second. \n");
	} else {
		printf("The first number is NOT less than or equal to the second. \n");
	}
	return 0;
	}
