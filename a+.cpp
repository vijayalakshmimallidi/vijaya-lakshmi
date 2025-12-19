#include<stdio.h>
int main()
{
	FILE *fp;
	fp=fopen("C:\\ppsc\\file 2.txt","a");
	fprintf(fp," world");
	fclose(fp);
	return 0;
}
