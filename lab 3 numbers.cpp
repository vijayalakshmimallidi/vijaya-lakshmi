#include<stdio.h>
int main()
{
	int a,b,c,maximum;
	printf("enter three numbers:");
	scanf("%d%d%d",&a,&b,&c);
	maximum=(a>b)?((a>c)?a:c):((b>c)?b:c);
	printf("maximum among three numbers is %d",maximum);
	return 0;
	
}
