#include <stdio.h>
int main()
{
	float r, h, areaRec, areaCircle, area;
	
	printf("Enter radius of the cylinder : ");
	scanf("%f", &r);
	
	printf("Enter height of the Cylinder : ");
	scanf("%f", &r);
	
	areaRec = 2* 22.0 / 7 * r* h;
	areaCircle = 22.0 / 7 * r * r;
	
	area = areaRec + 2 * areaCircle;
	
	printf("Surface area of cylinder : %.1f\n", area);
	
	return 0;
}
