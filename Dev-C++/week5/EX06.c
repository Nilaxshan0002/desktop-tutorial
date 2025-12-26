#include <stdio.h>
int main()
{
	printf("please enter the first character of the shape(R:Rectangle, T:Triangle, C:Circle)");
	char chletter;
	scanf("%c", &chletter);
	
	if(chletter=='R')
	{
		float width, length, areaR;
		printf("Enter the length of the rectangle:\n");
		scanf("%f", &width);
		printf("Enter the length of the rectangle:\n");
		scanf("%f", &length);
		
		areaR= length*width;
		printf("The area of the rectangle:%0.2f\n",areaR);
	}
	else if(chletter=='T')
	{
		float base, height, areaT;
		printf("Enter the base of the triangle:\n");
		scanf("%f", &base);
		printf("Enter the height of the triangle:\n");
		scanf("%f", &height);
		
		areaT= base*height/2;
		printf("The area of the triangle:%0.2f\n",areaT);
	}
	else if(chletter=='C')
	{
		float rad,areaC;
		printf("Enter the radius of the circle:\n");
		scanf("%f", &rad);
		
		areaC=3.14*rad*rad;
		printf("The area of the circle:%0.2f\n",areaC);
	}
	else
	{
		printf("invaild input");
	}
	return 0;
}
