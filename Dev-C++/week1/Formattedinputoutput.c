#include <stdio.h>
int main(void)
{
	int number1, number2; //declaring
	int sum;
	float price = 25000.00; //initializing
	number1 = 25;
	number2 = 12;
	
	sum = number1 + number2;
	
	printf("	Sum is: %d\n", sum);
	printf("Number one is: %d and Number two is: %",number1,number2);
	printf("%f\n", price);//precision - after the decimal point
						//will be maximum 6 digits
	printf("%.2f", price);
	return 0;
}
