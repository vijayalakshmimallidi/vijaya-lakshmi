#include <stdio.h>
int main ()
{
	int a[100][100],b[100][100],mul[100][100],r1,c1,c2,i,j,k,r2;
	printf("\n enter row and &column size:");
	scanf("%d%d%d%d",&r1,&r2,&c1,&c2);
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			printf("\n enter value at a[%d][%d]position",i,j);
			scanf("%d",&a[i][j]);
		}
    }
    if(c1!=r2)
    {
    	printf("\n matrix multiplication not possible");
	}
	else
	{
    	for(i=0;i<r1;i++)
			{
				for(j=0;j<c2;j++)
				{
				  mul[i][j]=0;
				  for(k=0;k<c1;k++)
				  {
				  	mul[i][j]=mul[i][j]+a[i][k]*b[k][j];
				  }
				}
			}
	}
	for(i=0;i<r1;i++)
			{
				for(j=0;j<c2;j++)
				{
					printf("\t%d",mul[i][j]);
				}
				printf("\n");
			}
			return 0;
	}
		
