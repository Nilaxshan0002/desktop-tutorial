#include <stdio.h>
int main(void)
{
	int number;
	printf("Enter the number:");
	scanf("%d", &number);
	
	if(number>=0)
	{
		printf("possitive");
	}
	else
	{
		printf("negative");
	}
	return 0;
}
