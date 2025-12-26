#include <stdio.h>
int main()
{
	int marks,std=1,count=1,original=0,max=0,sum=0;
	
	while(std<=3)
	{
		printf("Enter the marks of students%d:\n",std);
		count=1;
		sum=0;
		while(count<=4)
		{
			printf("Enter mark %d:",count);
			scanf("%d", &marks);
			count++;
			sum = sum + marks;
		}
		original=sum;
		printf("sum is :%d\n",sum);
		
		if(max<original)
		{
			max=original;
		}
		std++;
	}
	printf("maximum mark :%d\n",max);
	
	return 0;
}
