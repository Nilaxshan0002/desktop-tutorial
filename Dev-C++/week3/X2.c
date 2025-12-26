#include <stdio.h>
int main(void)
{
	int mark1, mark2;
	int total=0,average=0;
	printf("Enter value 1");
	scanf("%d", &mark1);
	printf("Enter value 2");
	scanf("%d", &mark2);
	printf("value 1: %d\n value 2: %d\n" ,mark1 , mark2);
	
	total = mark1 + mark2;
	printf("Total is: %d\n", total);
	
	average = total/2;
	printf("Average is : %d", average);
	return 0;
}
