#include<stdio.h>
int main()
{
	int a[100],n,i,j,temp;
	printf("\n enter array size:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\n enter value at a[%d]position:",i);
			scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=0;i<n-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	printf("\n After sorting");
	for(i=0;i<n;i++)
	{
		printf("\n %d",a[i]);
	}
	return 0;
}
