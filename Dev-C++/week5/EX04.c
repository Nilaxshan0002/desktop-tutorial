#include <stdio.h>
int main()
{
	float num1,num2;
	char choice;
	printf("Enter the operation[+,-,/,*]:");
	scanf("%c", &choice);
	
	switch(choice)
	{
		case('+'):
			printf("Enter the number1:");
			scanf("%f", &num1);
			printf("Enter the number2:");
			scanf("%f", &num2);
			printf("Result is %.2f",num1+num2);
			break;
		case('-'):
			printf("Enter the number1:");
			scanf("%f", &num1);
			printf("Enter the number2:");
			scanf("%f", &num2);
			printf("Result is %.2f",num1-num2);
			break;
		case('/'):
			printf("Enter the number1:");
			scanf("%f", &num1);
			printf("Enter the number2:");
			scanf("%f", &num2);
			printf("Result is %.2f",num1/num2);
			break;
		case('*'):
			printf("Enter the number1:");
			scanf("%f", &num1);
			printf("Enter the number2:");
			scanf("%f", &num2);
			printf("Result is %.2f",num1*num2);
			break;
		default:
			printf("Enter the correct operation");
	}
	return 0;
}
