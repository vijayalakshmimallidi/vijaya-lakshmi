#include <stdio.h>
int main()
{
	float b,h,area;
	printf("enter b and h vslues:");
	scanf("%f %f",&b,&h);
	area=0.5*b*h;
	printf("\n the area of the triangle is % .2f",area);
	return 0;
}
