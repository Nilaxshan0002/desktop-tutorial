#include <stdio.h>
int main()
{
	int mark1, mark2;
	float Avg=0;
	
	printf("Enter the mark1");
	scanf("%d", &mark1);
	
	printf("Enter the mark2");
	scanf("%d", &mark2);
	
	Avg=mark1+mark2/2.0;
	
	if(Avg>45)
	{
		printf("pass");
	}
	else
	{
		printf("fail");
	}
	return 0;
}
