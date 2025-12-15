#include<stdio.h>
#include<string.h>
int main()
{
	char str1[100]="Aditya";
	char str2[100]=" university";
	strcat(str1,str2);
	printf("\n After concatenate %s",str1 );
	return 0;
}
