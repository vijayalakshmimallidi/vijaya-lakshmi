#include <stdio.h>
int main()
{
	char a;
	char word[20];
	char sen[20];
	printf("enter a letter:");
	scanf("%c",&a);
	printf("enter a word:");
	scanf("%s",word);
	printf("enter a sentence:");
	scanf(" %[^\n]s",sen);
	printf("\n%c\n%s\n%s",a,word,sen);
	return 0;
}
