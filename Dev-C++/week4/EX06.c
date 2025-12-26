#include <stdio.h>
int main()
{
	int main marks;
	printf("Enter the marks");
	scanf("%d", &marks);
	
	if (100>=marks>=80)
	{
		printf("A");
	}
	else if (79>=marks>=70)
	{
		printf("B");
	}
	else if (69>=marks>=45)
	{
		printf("C");
	}
	else if (marks<45)
	{
		printf("F");
	}
	return 0;
}
