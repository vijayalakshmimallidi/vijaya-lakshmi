#include<stdio.h>
int main()
{
	char a[100];
	int i,len=0;
	printf("\n enter any string");
	gets (a);
	for(i=0;a[i]!='\0';i++)
	{
		len++;
	}
	printf("\n length of the string is %d",len);
	return 0;
}
