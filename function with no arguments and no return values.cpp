#include<stdio.h>
 int addition();
int main()
{
	int result;
	result=addition();
	printf("\n%d",result);
	return 0;
}
int addition()
{
	int a,b,c;
	printf("\n enter a and b values");
	scanf("%d%d",&a,&b);
	c=a+b;
	return c;
}

