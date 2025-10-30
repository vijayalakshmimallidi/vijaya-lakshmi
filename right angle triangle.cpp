#include <stdio.h>
int main()
{
	int n,i,j,k;
	printf("\n enter n value");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=n;j>=1+i;j--)
		{
			printf(" ");
			
		}
		for(k=1;k<=i;k++)
	
	{
		printf("*");
	}
	printf("\n");
	
	
	}
	return 0;
	
}
