#include <stdio.h>
#include<stdbool.h>
int main(){
	int num1, num2;
	bool isGreaterThanOrEqual;
	printf("Enter the first number: ");
	scanf("%d", &num1);
	printf("Enter the second number: ");
	scanf("%d", &num2);
	isGreaterThanOrEqual = (num1 >= num2);
	printf("Is the first number greater than or equal to the second? (using bool): %s\n", isGreaterThanOrEqual ? "true" : "false");
	printf("Is the first number greater than or equal to the second? (as integer): %d\n", isGreaterThanOrEqual);
	if (num1 >= num2){
		printf("The first number is greater than or equal to the second.\n");
		 }else {
		 	printf("The first number is NOT greater than or equal to thesecond.\n");
		 	}
		 	return 0;
}
