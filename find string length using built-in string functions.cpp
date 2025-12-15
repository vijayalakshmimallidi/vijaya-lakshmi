#include<stdio.h>
#include<string.h>
int main()
{
	char str1[100];
		printf("enter any string");
		scanf("%[^\n]s",str1);
    int a=strlen(str1);
	printf("\n the length of the string=%d",a);
	return 0;
}
