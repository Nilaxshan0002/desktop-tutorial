#include <stdio.h>
int main()
{
	int x=1;
	
	while(x>1)
	{
		printf("%d", x);
		x--;
	}
	printf("%do\n");
	do
	{
		printf("%d", x);
		x--;
	}
		while(x>1);
	return 0;
}
