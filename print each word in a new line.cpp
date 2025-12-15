#include<stdio.h>
int main()
{
	char line [100];
	int i;
	printf("\n enter one line of text");
	gets(line);
	for(i=0;line[i]!='\0';i++)
	{
	if(line[i]==' ')
	{
		printf("\n");
		}
		else
		{
			printf("%c",line[i]);
			}	
	}
	return 0;
}
