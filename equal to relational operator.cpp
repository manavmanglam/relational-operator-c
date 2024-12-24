#include <stdio.h>
#include <stdbool.h>
int main() {
	int num1, num2;
	bool areEqual; 
	printf("Enter the first number: ");
	scanf("%d", &num1);
	printf("Enter the second number: ");
	scanf("%d" , &num2);
	//check for equality using the == operator 
	areEqual = (num1 == num2);
	printf("Are the numbers equal? (using bool): %s\n", areEqual ? "true" : "false"); //ternary operator
	printf("Are the number equal? (as integer): %d\n", areEqual);
	//Another way to print the result directly
	if (num1 == num2){
		printf("The number are equal.\n");
} else {
	printf("The number are not equal.\n");
}
return 0;

}
