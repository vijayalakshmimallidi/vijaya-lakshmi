#include<stdio.h>
int main()
{
	int n,r=0,s=0;
	printf("\n enter n value:");
	scanf("%d",&n);
	if(n<10000||n>99999)
	{
		printf("error enter a valid 5 digits number\n");
	}
	return 0;
	while(n>0)
	{
		r=n%10;
		s=s+r;
		n=n/10;
	}
	printf("\n sum of digits=%d",s);
	return 0;
}
