#include <stdio.h>
int main(){
	int num1, num2;
	bool isGreaterThan;
	printf("Enter the first number: ");
	scanf("%d", &num1);
	printf("Enter the second number: ");
	scanf("%d", &num2);
	//Check if num1 is greater than num2 using the > operator
	isGreaterThan = (num1 > num2);
	printf("Is the first number greater than the second? (using bool): %s\n" , isGreaterThan ? "true" : "false");
	printf("Is the first number greater than the second? (as integer): %d\n" , isGreaterThan);
	//Another way to print the result directly using if/else
	if (num1 > num2) {
		printf("The first number is greater than the second.\n");
	} else {
		printf("The first number is NOT greater than the second.\n");
	}
     return 0;
}
