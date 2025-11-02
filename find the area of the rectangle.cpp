#include <stdio.h>
int main()
{
	float length,breadth,area;
	printf("enter the length and breadth:");
	scanf("%f%f",&length,&breadth);
	area=length*breadth;
	printf("the area of the rectangle is %f",area);
	return 0;
}
