#include <stdio.h>
int main()
{
	int x,sum=0,avg=0,count=0;
	
	while(x>=0)
	{
		printf("Enter the number:");
		printf("%d", &x);
		
		printf("\nValue is :%d\n",x);
		
		count++;
		if(x<0)
			break;
		else
		sum = sum + x;
		printf("sum is :%d\n",sum);
	}
	avg=sum/count;
	printf("average :%d",avg);
	
	return 0;
}
