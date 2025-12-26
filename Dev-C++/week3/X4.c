#include <stdio.h>
int main()
{
	int number1 , number2 , sum;
	printf("please enter the number1:");
	scanf("%d", &number1);
	printf("please enter the number2:");
	scanf("%d", &number2);
	sum = number1 + number2;
	printf("The summation is : %d", sum);
	
	return 0;
}
