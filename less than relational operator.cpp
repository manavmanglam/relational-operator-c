#include <stdio.h>
int main(){
	int num1, num2;
	bool isLessThan;
	printf("Enter the first number: ");
	scanf("%d", &num1);
	printf("Enter the second number: ");
	scanf("%d", &num2);
	isLessThan = (num1 < num2);
	printf("Is the first number less than the second? (using bool): %s\n", isLessThan ?"true" : "false");
	printf("Is the first number less than the second? (as integer): %d\n", isLessThan);
	if (num1 < num2) {
		printf("The first number is less than the second.\n");
	} else {
		printf("The first number is not less than the second. \n");
	}
	return 0;
	
	}

