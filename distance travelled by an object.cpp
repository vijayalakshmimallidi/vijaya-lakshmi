#include <stdio.h>
int main()
{
	float a,v,d;
	int t;
	printf("enter the value of acceleration:");
	scanf("%f",&a);
	printf("enter the value of velocity:");
	scanf("%f",&v);
	printf("enter the time:");
	scanf("%d",t);
	d=(v*t)+(a*t*t)/2;
	printf("the distance : %2f",d);
	return 0;
}

