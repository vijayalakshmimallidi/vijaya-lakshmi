#include <stdio.h>
int main()
{
	int i=1,n,sum=0;
	printf("enter n value");
	scanf("%d",&n);
	while(i<=n)
	{
		sum=sum+i;
		i++;
	}
	printf("\n sum of n natural numbrs is %d",sum);
	return 0;
}
