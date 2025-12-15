#include<stdio.h>
int main()
{
	int arr[100],n,i,j,found=0;
	printf("\n enter n size:");
	scanf("%d",&n);
	printf("\n enter %d value",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("\n duplicate values are");
	for(i=0;i<n;i++)
	{
	  for(j=i+1;i<n;j++)
	  {
	  	if(arr[i]==arr[j])
	  	{
	  		printf("\t%d",arr[i]);
	  		found=1;
	  		break;
	    }
	  }	
	}
	if(found==0)
	{
		printf("\n no duplicate values");
	}
	return 0;
	
}
