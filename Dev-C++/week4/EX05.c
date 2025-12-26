#include <stdio.h>
int main()
{
	int age;
	char gender;
	
	printf("Enter the gender");
	scanf("%c", &gender);
	
	printf("Enter the age");
	scanf("%d", &age);
	
	if (age>=65)
	{
		if(gender=="m")
		{
			printf("senior male");
		}
		else if(gender=="f")
		{
			printf("senior female");
		}
	}
	return 0;
}
