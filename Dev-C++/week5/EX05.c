#include <stdio.h>
int main()
{
	int angleone;
	int angletwo;
	int anglethree;
	
	printf("Enter the angleone");
	scanf("%d", &angleone);
	printf("Enter the angletwo");
	scanf("%d", &angletwo);
	printf("Enter the anglethree");
	scanf("%d", &anglethree);
	int sum=angleone+angletwo+anglethree;
	
	if(sum==180)
	{
		printf("This is a Triangle");
	}
	else
	{
		printf("This is not a Triangle");
	}
	return 0;
}
