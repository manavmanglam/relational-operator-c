#include <stdio.h>
#include <stdbool.h>
int main(){
	int num1, num2;
	bool areNotEqual;
	printf("Enter the first number: ");
	scanf("%d", &num1);
	printf("Enter the second number: ");
	scanf("%d", &num2);
	//check for inequality using the != operator
	areNotEqual = (num1 != num2);
	//print the result using bool format specifier or integer representation
	printf("Are the number Not equal?(using bool): %s\n", areNotEqual ? "true" : "false");
	printf("Are the number Not equal? (as integer): %d\n", areNotEqual);
	//another way to print the result directly using if/else
	if (num1!= num2) {
		printf("The number are Not equal.\n");
} else {
	printf("The number ARE equal.\n");
}
		return 0;
}
