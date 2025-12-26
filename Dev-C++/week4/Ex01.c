#include <stdio.h>
int main()
{
	int number,a,b,c;
	printf("Enter the number : ");
	scanf("%d", &number);
	
	a = number/1000;
	b = number%1000/100;
	c = number%1000%100/10;
	
	printf("%d\a=1\%d\b=2\%d\c=3\%d", a,b,c);
	return 0;
}
