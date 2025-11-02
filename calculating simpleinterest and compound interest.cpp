#include <stdio.h>
#include <math.h>
int main()
{
	float principal,rate,compoundinterest,simpleinterest;
	int time;
	printf("enter principal amount:");
	scanf("%f",&principal);
	printf("\n enter interest rate:");
	scanf("%f",&rate);
	printf("\n enter time in years:");
	scanf("%d",&time);
	simpleinterest=(principal*rate*time)/100;
	compoundinterest=principal*(pow(1+rate/100,time)-1);
	printf("\n simpleinterest:%2f",simpleinterest);
	printf("\n compoundinterest : %2f",compoundinterest);
	return 0;
}
