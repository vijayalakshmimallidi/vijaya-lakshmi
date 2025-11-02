#include <stdio.h>
int main()
{
	int age;
	float weight;
	char gender;
	char name[20];
	printf("enter name :");
	scanf("%[^\n]",name);
	printf("enter weight:");
	scanf("%f",&weight);
	printf("enter gender:");
	scanf(" %c",&gender);
	printf("enter age:");
	scanf("%d",&age);
	printf("\n%d\n%f\n%s\n%c",age,weight,name,gender);
	return 0;
}

