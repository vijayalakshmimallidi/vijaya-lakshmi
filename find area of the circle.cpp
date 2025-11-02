#include <stdio.h>
int main()
{
	float radius,area,PI=3.14;
	printf("enter radius:");
	scanf("%f",&radius);
	area=PI*radius*radius;
	printf("the radius of the circle is %f",area);
	return 0;
}
