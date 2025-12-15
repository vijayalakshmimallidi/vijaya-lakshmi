#include<stdio.h>
int main()
{
	int a=10;
	int *ptr=&a;
	int **dptr;
	dptr=&ptr;	
	printf("\n The value of a %d",a);
	printf("\n The address of a %x",&a);
	printf("\n The value of ptr %x",ptr);
	printf("\n The address of ptr %x",&ptr);
	printf("\n The value of dptr %x",dptr);
	printf("\n The address of dptr %x",&dptr);
	printf("\n The ptr pointing value %d",*ptr);
	printf("\n The dptr pointing value %d",**dptr);
	printf("\n %d",*(&a));
	return 0;
}
