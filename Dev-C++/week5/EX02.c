#include <stdio.h>
int main(void)
{
	printf("please enter the transaction type(w-withdrawal,d-deposit)");
	char selection=getchar();
	float value,amount;
	
	printf("please input your bank balance");
	scanf("%f", &value);
	
	printf("please input your amount");
	scanf("%f", &amount);
	
	if(selection=='w'||selection=='W')
	{
		printf("You have selected to withdraw money\n");
		float result=value-amount;
		printf("Your current bank balance is:%0.2f",result);
	}
	else if(selection=='d'||selection=='D')
	{
		printf("You have se;ected to deposit money\n");
		float result=value+amount;
		printf("Your current bank balance is:%0.2f",result);
	}
	else
	{
		printf("You have selected an invalid transaction type");
	}
	return 0;
}
